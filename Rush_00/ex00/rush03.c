/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:13:13 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/08 21:25:45 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	characters(int x, int width, int y, int lenght);

void	rush(int x, int y)
{
	int	width;
	int	length;

	width = 1;
	length = 1;
	while (length <= y && (y > 0 && x > 0))
	{
		while (width <= x)
		{
			characters(x, width, y, length);
			width++;
		}
		write(1, "\n", 1);
		width = 1;
		length++;
	}
}

void	characters(x, width, y, length)
{
	if (width == 1 && length == 1)
		ft_putchar('A');
	else if (width == x && length == 1)
		ft_putchar('C');
	else if (width == 1 && length == y)
		ft_putchar('A');
	else if (width == x && length == y)
		ft_putchar('C');
	else if (width == 1)
		ft_putchar('B');
	else if (width == x)
		ft_putchar('B');
	else if (length == 1)
		ft_putchar('B');
	else if (length == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
