/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:09:30 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/16 11:38:45 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex08/ft_strlowcase.c"

char	*ft_strlowcase(char *str);

int main(void)
{
	char	test[128];

	strcpy(test, "minusculebonjour");
	printf("%s - uniquement minuscule\n", ft_strlowcase(test));

	strcpy(test, "MAJUSCULEBONJOUR");
	printf("%s - uniquement majuscule\n", ft_strlowcase(test));

	strcpy(test, "UnPeu 2 Tout BONJOUR");
	printf("%s - un beau melange\n", ft_strlowcase(test));
}
