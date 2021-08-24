#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char			str[42];

	strcpy(str, "Coucou\ntu vas \tbien ?");
	//strcpy(str, "Cou\0cou\ntu \bvas \abien \t?\v");
	//strcpy(str, "");
	printf("str=%s\n", str);
	ft_putstr_non_printable(str);
	return (0);
}
