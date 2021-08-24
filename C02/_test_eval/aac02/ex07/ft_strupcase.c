char	*ft_strupcase(char *str)
{
	int		i;
	char	*c;

	i = 0;
	c = str;
	while (*c != '\0')
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		c++;
	}
	return (str);
}
