/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate_arrays.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:39:05 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/15 21:19:26 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	separate_arrays(char *str, char *str1)
{
	int	index;
	int	n1;

	index = 0;
	n1 = 0;
	while (str[index])
	{
		if (index % 2 == 0)
			str1[n1] = str[index];
		index++;
		n1++;
	}
}
