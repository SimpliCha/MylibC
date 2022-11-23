

#include "libc.h"

void	*my_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p = (unsigned char) c;
		p++;
	}
	return (s);
}
