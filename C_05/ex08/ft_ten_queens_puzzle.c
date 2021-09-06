/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:00:16 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/23 11:12:12 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_ten_queens_puzzle(void)
{
	int	*grid;
	int	index;
	int	solutions;
	int	*ptr;

	solutions = 0;
	*ptr = solutions;
	grid = (int *)malloc(100 * 4);
	index = 0;
	while (index < 100)
	{
		grid[index] = 0;
		index++;
	}
	solver(grid, ptr, 0);
	return (solutions);
}

int	solver(int *grid, int *solutions, int position)
{
	grid[position] = 1;
	if (is_valid(grid, position) == 1)
	{
		if (position == 99)
		{
			*solution++;
			return (1);
		}
		if (solver(grid, str, position + 1) == 1)
			return (1);
	}
	grid[position] = 0;
	return (0);
}*/
