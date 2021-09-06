/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate_arrays.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:39:05 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/15 14:32:49 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	separate_arrays(char *str, char *updown, char *leftright)
{
	int	index;
	int	n1;
	int	n2;

	index = 0;
	n1 = 0;
	n2 = 0;
	while (str[index])
	{
		if (index % 2 == 0 && index < 15)
			updown[n1++] = str[index];
		if (index % 2 == 0 && index > 15)
		{
			leftright[n2++] = str[index];
		}
		index++;
	}
}
