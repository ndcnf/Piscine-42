/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:22:03 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/16 17:42:02 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FICHIER DE TEST UNIQUEMENT
#include <string.h>
#include <stdio.h>
#include "../ex01/ft_strncpy.c"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[100] = "##################################";
	char	src[100] = "hamster nain";
	int		i;


	i = 15;
	printf("attendu en vrai : %s\n", strncpy(dest, src, i));
	printf("source %s - destination %s - n %d\n", src, dest, i);
	printf("++++++++++++++++++++++++++++++++++++++++++\n");
	for(int j = 0 ; j < 20; j++)
	{
		printf("%x ", dest[j]);
	}
	*dest = 0;

	i = 100;
	printf("attendu en vrai : %s\n", strncpy(dest, src, i));
	printf("source %s - destination %s - n %d\n", src, dest, i);
	printf("rendu : %s\n", ft_strncpy(dest, src, i));
	printf("++++++++++++++++++++++++++++++++++++++++++\n");
	*dest = 0;
	
	i = 0;	
	printf("attendu en vrai : %s\n", strncpy(dest, src, i));
	printf("rendu : %s\n", ft_strncpy(dest, src, i));
	printf("++++++++++++++++++++++++++++++++++++++++++\n");
	*dest = 0;

	i = 200;
	printf("attendu en vrai : %s\n", strncpy(dest, src, i));
	printf("rendu : %s\n", ft_strncpy(dest, src, i));
	*dest = 0;

	return 0;
}
