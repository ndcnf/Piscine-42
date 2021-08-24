/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:04:53 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/05 15:20:03 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	ascii_num ;

	ascii_num = 48 ;
	while (ascii_num < 58)
	{
		write (1, &ascii_num, 1);
		ascii_num++;
	}
}
