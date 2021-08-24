char	*ft_strlowcase(char *str)
{
	int		i;
	char	*c;

	i = 0;
	c = str;
	while (*c != '\0')
	{
		if (*c >= 'A' && *c <= 'Z')
			*c += 32;
		c++;
	}
	return (str);
}
