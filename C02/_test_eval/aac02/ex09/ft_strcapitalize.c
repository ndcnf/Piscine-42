int		ft_is_alphanum(char c);
char	ft_capitalize(char c);
char	ft_minimalize(char c);

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*cur;
	char	prv;

	i = 0;
	prv = ' ';
	cur = str;
	while (*cur != '\0')
	{
		if (!ft_is_alphanum(prv) && ft_is_alphanum(*cur))
			*cur = ft_capitalize(*cur);
		else
			*cur = ft_minimalize(*cur);
		prv = *cur;
		cur++;
	}
	return (str);
}

int	ft_is_alphanum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	ft_capitalize(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

char	ft_minimalize(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
