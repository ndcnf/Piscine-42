#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			src[128];
	char			dest[128];
	int				size;
	int				i;

	size = 13;
	strcpy(src, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	//strcpy(dest, "");
	printf("%lu\n", strlcpy(dest, src, size));
	//printf("%u\n", ft_strlcpy(dest, src, size));
	i = 0;
	while (i < 128)
	{
		printf("%x ", dest[i]);
		i++;
	}
	return (0);
}
