/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:08:02 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/18 11:25:05 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_strlen.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Attendu : %lu\n", strlen("Bonjour nounou"));
	printf("Resultat : %d\n", ft_strlen("Bonjour nounou"));

	printf("Attendu : %lu\n", strlen(""));
	printf("Resultat : %d\n", ft_strlen(""));
}
