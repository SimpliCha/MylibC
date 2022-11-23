

#include "libc.h"

char	*my_strdup(const char *s)
{
	char	*dupli;
	size_t	len;
	size_t	i;

	i = 0;
	len = my_strlen(s);
	dupli = malloc(sizeof(char) * (len + 1));
	if (dupli == NULL)
		return (NULL);
	while (s[i])
	{
		dupli[i] = s[i];
		i++;
	}
	dupli[i] = '\0';
	return (dupli);
}
