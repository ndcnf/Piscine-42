/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:28:23 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/23 12:20:32 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex04/ft_fibonacci.c"

int	main(void)
{
	printf("6, attendu 8 : %d\n", ft_fibonacci(6));
	printf("0, attendu 0 : %d\n", ft_fibonacci(0));
	printf("-2, attendu -1 : %d\n", ft_fibonacci(-2));

	return (0);
}
