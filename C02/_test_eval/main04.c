/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:09:30 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/15 17:50:56 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex04/ft_str_is_lowercase.c"

int ft_str_is_lowercase(char *str);

int main(void)
{
	printf("%d - uniquement minuscule (1)\n", ft_str_is_lowercase("chienfou"));
	printf("%d - aucun caractere (1)\n", ft_str_is_lowercase(""));
	printf("%d - alphanum (0)\n", ft_str_is_lowercase("cheval2troie"));
	printf("%d - minuscule et majuscule (0)\n", ft_str_is_lowercase("UnMot"));
}
