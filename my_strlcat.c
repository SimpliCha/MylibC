

/* Copies & concatenates, takes the full size of buffer not just the length   */
/* and guarantees to NUL-terminate the result as long as size is larger than 0*/
/* one byte for the NUL should be included in size. both src and dest must be */
/* NUL-terminated.                                                            */
/* The strlcat func. appends the NUL-terminated string src to the end of dest.*/
/* It will append at most size - strlen(dst) - 1 bytes, NUL-terminating result*/
/* Returns the total length of strings they tried to create. that means the   */
/* initial length of dst plus the length of src.                              */

#include "libc.h"

size_t	my_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	i = 0;
	d_len = my_strlen(dest);
	s_len = my_strlen(src);
	if (size <= d_len)
		return (s_len + size);
	while (dest[i])
		dest++;
	while ((i + d_len + 1 < size) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (d_len + s_len);
}
