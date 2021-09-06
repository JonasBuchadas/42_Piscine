/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 21:08:44 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/15 22:33:08 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//void	separate_arrays(char *str, char *updown, char *leftright);
void	ft_putstr(char *str);
int	is_valid(int *grid, char *str, int position)
{
	int		index;
//	int		counter;
//	int 	temp;
//	char	updown[8];
//	char	leftright[8];

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
	// Sudoku OK
	ft_putstr(str);
//	separate_arrays(str, updown, leftright);
/*	index = 0;
	counter = 0;
	temp = 0;
	while (index < 16)
	{
		if ((index % 4) == (position % 4))
		{
			if (grid[index] > temp)
				counter++;
			temp = grid[index];
		}
		index++;
	}
	if (updown[position % 4] != counter)
	   return (0);
	counter = 0;
	temp = 0;
	while (index >= 0)
	{
		if ((index % 4) == (position % 4))
		{
			if(grid[index] > temp)
				counter++;
			temp = grid[index];
		}
		index--;
	}
	if (updown[(position % 4) + 4] != counter)
	   return (0);
	index = 0;
	counter = 0;
	temp = 0;
	while (index < 16)
	{
		if ((index / 4) == (position / 4))
		{
			if (grid[index] > temp)
				counter++;
			temp = grid[index];
		}
		index++;
	}
	if (leftright[(position % 4)] != counter)
	   return (0);
	counter = 0;
	temp = 0;
	while (index >= 0)
	{
		if ((index / 4) == (position / 4))
		{
			if(grid[index] > temp)
				counter++;
			temp = grid[index];
		}
		index--;
	}
	if (str[(position % 4) + 4] != counter)
	   return (0);
*/
	return (1);

}
