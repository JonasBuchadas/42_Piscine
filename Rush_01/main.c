/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:10:41 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/15 22:02:44 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		solver(int *grid, char *str, int position);
void	ft_putchar(char c);
void	separate_arrays(char *str, char *updown, char *leftright);
int	arg_check(int argc, char **argv, char *str);

int main (int argc, char **argv)
{	
	char *str;
	str = argv[1];
	if (arg_check(argc, argv, str) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	char updown[9];
	char leftright[9];
	separate_arrays(str,updown,leftright);
	
	int *grid;
	ft_putstr(updown);
	ft_putchar('\n');
	ft_putstr(leftright);
	ft_putchar('\n');
	ft_putchar(updown[0]);
	int index;
	grid = (int*)malloc(16 * 4);
	index = 0;
	while (index < 16)
	{
		grid[index] = 0;
		index++;
	}
	solver(grid, str, 0);
	index = 0;
	while (index < 16)
	{
		ft_putchar(grid[index] + 48);
		if ((index + 1) % 4 == 0 && index != 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');	
		index++;
	}
	free(grid);
	return (0);
}
int	arg_check(int argc, char **argv, char *str)
{
	int index;

	if (argc != 2)
		return (0);
	str = argv[1];
	if (ft_strlen(str) != 31)
		return (0);
	index = 0;
	while (str[index])
	{
		if (index % 2 == 0)
		{
			if (!(str[index] >= '1' && str[index] <= '4'))
				return (0);
		}
		if (index % 2 == 1)
		{
			if (str[index] != ' ')
				return (0);
		}
		index++;
	}
	return (1);
}	
