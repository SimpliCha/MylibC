

/* copies & concatenates strings,takes the full size of buffer not just length*/
/* and guarantees to NUL-terminate the result as long as there is at least one*/
/* byte free in dest a byte for the NUL should be included in size. src musst */
/* be NUL-terminated. copies up to size - 1 characters from NUL-terminated    */
/* string src to dest, and NUL-terminates the result. returns total len of src*/

#include "libc.h"

size_t	my_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i + 1 < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
