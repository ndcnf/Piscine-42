#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;

	str = "42";
	//str = "Helloworld";
	//str = "";
	printf("str=%s is=%d\n", str, ft_str_is_numeric(str));
	return (0);
}
