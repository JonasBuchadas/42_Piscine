/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:06:27 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/08 20:43:54 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	rush(-1, 5);
	rush(-1, -5);
	rush(1, -5);
	rush(5, 0);
	rush(0, 0);
	rush(0, 1);
	return (0);
}
