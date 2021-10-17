#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[256];
	char	*src;

	src = "\nHFuSWcCFindEHuXURnuYswWfZSYI\n\niDTsMFsaGGzWpTYpOu\n\nsxsqAmCxZ\n\n\n";
	//printf("src=%s dest=%s\n", src, dest);
	//ft_strcpy(dest, src);
	//printf("src=%s dest=%s\n", src, dest);
	//printf("src=%s dest=%s\n", src, ft_strcpy(dest, src));
	printf("src=%s dest=%s", src, strcpy(dest, src));
	return (0);
}
