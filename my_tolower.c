

#include "libc.h"

int	my_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	else
		return (c);
	return (c);
}
