

#include "libc.h"

char	*my_strnstr(const char *big, const char *little, size_t len)
{
	char	*haysack;
	char	*needle;
	size_t	i;
	size_t	length;

	haysack = (char *) big;
	needle = (char *) little;
	length = my_strlen(needle);
	i = 0;
	if (needle[i] == '\0')
		return (haysack);
	while (haysack[i] != '\0' && (i + length) <= len)
	{
		if (my_strncmp((haysack + i), needle, length) == 0)
		{
			return (haysack + i);
		}
		i++;
	}
	return (NULL);
}
