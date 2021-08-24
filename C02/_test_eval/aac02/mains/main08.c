#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	hello[42];

	strcpy(hello, "HeLlO w0rLd!");
	//strcpy(hello, "");
	printf("str=%s\n", ft_strlowcase(hello));
	return (0);
}
