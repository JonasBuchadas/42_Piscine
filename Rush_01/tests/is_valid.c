/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 21:08:44 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/15 20:31:22 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	is_valid(int *grid, int position)
{
	int		index;

	index = 0;
	while (index < 16)
	{
		if ((index % 4) == (position % 4) && index != position)
			if (grid[position] == grid[index])
				return (0);
		if ((index / 4) == (position / 4) && index != position)
			if (grid[position] == grid[index])
				return (0);
		index++;
	}
	return (1);
}
