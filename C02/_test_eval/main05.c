/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:09:30 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/16 11:59:56 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex05/ft_str_is_uppercase.c"

int ft_str_is_uppercase(char *str);

int main(void)
{
	printf("%d - uniquement majuscule (1)\n", ft_str_is_uppercase("MAJUSCULE"));
	printf("%d - aucun caractere (1)\n", ft_str_is_uppercase(""));
	printf("%d - alphanum (0)\n", ft_str_is_uppercase("cheval2troie"));
	printf("%d - minuscule et majuscule (0)\n", ft_str_is_uppercase("UnMot"));
}
