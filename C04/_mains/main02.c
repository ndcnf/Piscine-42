/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:08:02 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/20 10:48:02 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_putnbr.c"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(0);
	printf("\n");

	ft_putnbr(2147483647);
	printf("\n");


	ft_putnbr(-15);
	printf("\n");

	ft_putnbr(-2147483648);
	printf("\n");

}
