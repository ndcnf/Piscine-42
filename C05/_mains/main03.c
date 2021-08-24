/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:26:47 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/23 15:34:33 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex03/ft_recursive_power.c"

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("6^5 (7776) : %d", ft_recursive_power(6, 5));
	printf("\n");
	printf("0^0 (1) : %d", ft_recursive_power(0, 0));
	return (0);
}
