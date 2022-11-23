

#include "libc.h"

int	my_isascii(int c)
{
	if ((c & 0x7F) == c)
		return (1);
	else
		return (0);
}
