#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*src != 0)
	{
		*d = *src;
		src++;
		d++;
	}
	*d = *src;
	return (dest);
}
