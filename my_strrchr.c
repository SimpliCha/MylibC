

#include "libc.h"

char	*my_strrchr(const char *s, int c)
{
	size_t	len;

	len = my_strlen(s);
	while (len != '\0')
	{
		if (s[len] == (unsigned char) c)
			return ((char *)(s + len));
		len--;
	}
	if (s[len] == (char)c)
		return ((char *)s + len);
	return (NULL);
}
