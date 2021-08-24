char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*d;

	d = dest;
	i = 0;
	while (*src != 0 && i < n)
	{
		*d = *src;
		src++;
		d++;
		i++;
	}
	while (i < n)
	{
		*d = 0;
		d++;
		i++;
	}
	return (dest);
}
