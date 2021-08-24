#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;

	//str = "helloworld";
	//str = "HELLOWORLD";
	str = "";
	printf("str=%s is=%d\n", str, ft_str_is_uppercase(str));
	return (0);
}
