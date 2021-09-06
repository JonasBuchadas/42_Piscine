/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 13:31:22 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/15 22:04:09 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		is_valid(int *grid, int position);

int		solver(int *grid, char *str,int position)
{	
	int	number;

	number = 1;
	while (number <= 4)
	{
		grid[position] = number;
		if (is_valid(grid, position) == 1)		// Number is valid
//		if (1) 
		{	
			if (position == 15)
				return (1);
			if (solver(grid, str, position + 1) == 1)
				return (1);
		}	
		number++;
	}
	grid[position] = 0;
	return (0);
}
