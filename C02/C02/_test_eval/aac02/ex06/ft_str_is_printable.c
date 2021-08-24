int	ft_str_is_printable(char *str)
{
	int	res;

	res = 1;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*(str) < 32 || *(str) > 126)
			res = 0;
		str++;
	}
	return (res);
}
