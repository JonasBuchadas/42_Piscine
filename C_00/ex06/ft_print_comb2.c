/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:56:27 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/23 11:42:49 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb2(void);
void	print_numbers(int d1, int d2, int d3, int d4);
void	repetitions(int d1, int d2, int d3, int d4);

void	ft_print_comb2(void)
{
	int	d1;
	int	d2;
	int	d3;
	int	d4;

	d1 = 48;
	d2 = 48;
	d3 = 48;
	d4 = 48;
	repetitions(d1, d2, d3, d4);
}

void	print_numbers(int d1, int d2, int d3, int d4)
{
	if (!(d1 == d3 && d2 == d4))
	{
		write(1, &d1, 1);
		write(1, &d2, 1);
		write(1, " ", 1);
		write(1, &d3, 1);
		write(1, &d4, 1);
		if (!(d1 == 57 && d2 == 56 && d3 == 57 && d4 == 57))
		{
			write(1, ", ", 2);
		}
	}
}

void	repetitions(int d1, int d2, int d3, int d4)
{
	while (d1 <= 57)
	{
		while (d2 <= 57)
		{
			while (d3 <= 57)
			{
				while (d4 <= 57)
				{
					print_numbers(d1, d2, d3, d4);
					d4++;
				}
				d4 = 48;
				d3++;
			}
			d2++;
			d3 = d1;
			d4 = d2;
		}
		d1++;
		d2 = 48;
		d3 = d1;
		d4 = d1;
	}
}
/*int main (void)
{
	ft_print_comb2();
	return (0);
}*/
