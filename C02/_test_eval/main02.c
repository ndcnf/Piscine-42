/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:33:50 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/16 22:16:54 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex02/ft_str_is_alpha.c"

int	main(void)
{
	char	a[100] = "dragon2urieux";
	ft_str_is_alpha(a);
	printf("resultat : %d\n", ft_str_is_alpha(a));
	return 0;
}
