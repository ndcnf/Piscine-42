/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:09:30 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/15 17:28:02 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex03/ft_str_is_numeric.c"

int ft_str_is_numeric(char *str);

int main(void)
{
	printf("%d - uniquement num (1)\n", ft_str_is_numeric("124578533"));
	printf("%d - aucun caractere (1)\n", ft_str_is_numeric(""));
	printf("%d - alphanum (0)\n", ft_str_is_numeric("cheval2troie"));
}
