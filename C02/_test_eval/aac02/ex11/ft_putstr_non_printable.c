#include <unistd.h>

int		ft_str_is_printable(char str);
void	ft_dec_to_hex(int dec, char *hex1, char *hex2);

void	ft_putstr_non_printable(char *str)
{
	char	hex1;
	char	hex2;

	while (*str != 0)
	{
		if (ft_str_is_printable(*str))
			write(1, str, 1);
		else
		{
			ft_dec_to_hex(*str, &hex1, &hex2);
			write(1, "\\", 1);
			write(1, &hex1, 1);
			write(1, &hex2, 1);
		}
		str++;
	}
}

int	ft_str_is_printable(char str)
{
	if (str < 32 || str > 126)
		return (0);
	else
		return (1);
}

void	ft_dec_to_hex(int dec, char *hex1, char *hex2)
{
	int	mod;

	*hex1 = (dec / 16) + 48;
	mod = dec % 16;
	if (mod > 9)
		*hex2 = mod + 87;
	else
		*hex2 = mod + 48;
}
