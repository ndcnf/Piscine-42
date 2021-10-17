#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	hello[2048];

	strcpy(hello, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un aaaAAA");
	//strcpy(hello, "HeLlO w0rLd! It's sunny outside :)");
	//strcpy(hello, "");
	//strcpy(hello, "Dg'GCiBwqJ}Y<DH$0YE1QJnj! 4\nN^J\n{WS>Vl@>F#CqY9N&        O'N)'\n/K=5ty4 <U).L~@Pok`n~AqHO 1MIdoA\nP*TOoryyQRPBSp.Zz{Z9\n#?C3jlqRv2aGh1 ^kTvlfKx<#Zkk    *V3HOf#\n:BP_vD@DLRCG1`0eR'Ue@1v+IZ*{V]4\nY+I#Mxfi6b1uAQhM1 P,{XfnA<*<7j-#\nUcEX)(UFi*At[vmKHK\nNULL\n\n\nReKt17+LOl MdR Mdr 4242l42\n\n");
	//strcpy(hello, "");
	printf("str=%s\n", ft_strcapitalize(hello));
	return (0);
}
