#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;

	//str = "helloworld";
	//str = "HELLOWORLD";
	str = "";
	printf("str=%s is=%d\n", str, ft_str_is_printable(str));
	return (0);
}
