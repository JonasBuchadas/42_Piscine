/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 21:14:54 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/23 11:42:32 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_comb(void);
void	print_nbrs(int d1, int d2, int d3);

void	ft_print_comb(void)
{
	int	d1;
	int	d2;
	int	d3;

	d1 = 48;
	d2 = 48;
	d3 = 48;
	while (d1 <= 57)
	{
		while (d2 <= 57)
		{
			while (d3 <= 57)
			{
				print_nbrs(d1, d2, d3);
				d3++;
			}
			d2++;
			d3 = 48;
		}
		d1++;
		d2 = 48;
		d3 = 48;
	}
}

void	print_nbrs(int d1, int d2, int d3)
{
	if ((d1 != d2 && d1 != d3 && d2 != d3) && (d2 > d1) && (d3 > d2))
	{
		write(1, &d1, 1);
		write(1, &d2, 1);
		write(1, &d3, 1);
		if (!(d1 == 55 && d2 == 56 && d3 == 57))
		{
			write(1, ", ", 2);
		}
	}
}
/*int main (void)
{
	ft_print_comb();
	return (0);
}*/
