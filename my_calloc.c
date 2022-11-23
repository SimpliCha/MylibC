

/*  The  calloc()  function allocates memory for an array of nmemb elements
    of size bytes each and returns a pointer to the allocated memory.   The
    memory  is  set  to zero.  If nmemb or size is 0, then calloc() returns
    either NULL, or a unique pointer value that can later  be  successfully
    passed to free().  If the multiplication of nmemb and size would result
    in integer overflow, then calloc() returns an error.  By  contrast,  an
    integer  overflow  would  not be detected in the following call to mal‐
    loc(), with the result that an incorrectly sized block of memory  would
    be allocated: */

#include "libc.h"

void	*my_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
