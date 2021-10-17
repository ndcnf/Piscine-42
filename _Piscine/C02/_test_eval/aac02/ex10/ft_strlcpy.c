unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;

	src_len = 0;
	while (*src != 0 && src_len < (size - 1))
	{
		*dest = *src;
		src_len++;
		dest++;
		src++;
	}
	*dest = 0;
	while (*src != 0)
	{
		src_len++;
		src++;
	}
	return (src_len);
}
