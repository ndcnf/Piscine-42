#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;

	//str = "Hello 42!";
	str = "Helloworld";
	//str = "";
	printf("str=%s is=%d\n", str, ft_str_is_alpha(str));
	return (0);
}
