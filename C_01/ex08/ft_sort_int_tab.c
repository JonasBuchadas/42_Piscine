/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:33:37 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/09 15:38:50 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	rep;
	int	swap;
	int	temp;

	rep = 0;
	swap = 0;
	while (rep < size - 1)
	{
		while (swap < size - rep - 1)
		{
			if (*(tab + swap) > *(tab + swap + 1))
			{
				temp = *(tab + swap);
				*(tab + swap) = *(tab + swap + 1);
				*(tab + swap + 1) = temp;
			}
			swap++;
		}
		swap = 0;
		rep++;
	}
}
