/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:28:23 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/24 09:47:21 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex05/ft_sqrt.c"

int	main(void)
{
	printf("36, attendu 6 : %d\n", ft_sqrt(36));
	printf("0, attendu 0 : %d\n", ft_sqrt(0));
	printf("-4, attendu 0 : %d\n", ft_sqrt(-4));
	printf("37, attendu 0 : %d\n", ft_sqrt(17));
	printf("9, attendu 3 : %d\n", ft_sqrt(9));

	return (0);
}
