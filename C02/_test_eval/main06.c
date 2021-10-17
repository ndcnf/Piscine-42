/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:09:30 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/15 18:23:17 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex06/ft_str_is_printable.c"

int ft_str_is_printable(char *str);

int main(void)
{
	printf("%d - uniquement affichable (1)\n", ft_str_is_printable("chienfou"));
	printf("%d - aucun caractere (1)\n", ft_str_is_printable(""));
	printf("%d - alphanum (0)\n", ft_str_is_printable(127));
	printf("%d - non affichable (0)\n", ft_str_is_printable(128));
}
