#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;

	//str = "helloworld";
	str = "Helloworld";
	//str = "";
	printf("str=%s is=%d\n", str, ft_str_is_lowercase(str));
	return (0);
}
