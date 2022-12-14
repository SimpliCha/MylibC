

#include "libc.h"

void	*my_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *) s;
	chr = (unsigned char) c;
	while (n--)
	{
		if (*str == chr)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
