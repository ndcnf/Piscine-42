/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:09:30 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/15 18:48:41 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex07/ft_strupcase.c"

char	*ft_strupcase(char *str);

int main(void)
{
	char	test[128];

	strcpy(test, "testestseet");
	printf("%s - uniquement minuscule\n", ft_strupcase(test));

	/*
	printf("%s - uniquement minuscule\n", ft_strupcase("chienfou"));
	printf("%s - aucun caractere\n", ft_strupcase(""));
	printf("%s - uniquement majuscule\n", ft_strupcase("QUOI"));
	printf("%s - autre\n", ft_strupcase("Bonjour2"));
*/
}
