/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:58:16 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/05 12:25:05 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	ascii_letter ;

	ascii_letter = 97 ;
	while (ascii_letter > 96 && ascii_letter < 123)
	{
		write(1, &ascii_letter, 1);
		ascii_letter++;
	}
}
