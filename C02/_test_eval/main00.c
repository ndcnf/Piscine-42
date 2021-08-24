/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:22:03 by nchennaf          #+#    #+#             */
/*   Updated: 2021/08/11 15:41:11 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FICHIER DE TEST UNIQUEMENT

#include <stdio.h>
#include "../ex00/ft_strcpy.c"

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[100] = {0};
	char	src[100] = "hamster";
	int		i;

	i = 0;
	
	ft_strcpy(dest, src);
	return 0;
}
