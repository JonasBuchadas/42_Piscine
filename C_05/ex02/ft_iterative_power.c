/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:50:58 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/25 17:03:16 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("Number (-1)\tPower (2)\tResult: %i\tExpected (1)\n"
	, ft_iterative_power(-1, 2));
	printf("Number (10)\tPower (-2)\tResult: %i\tExpected (0)\n"
	, ft_iterative_power(10, -2));
	printf("Number (-4)\tPower (3)\tResult: %i\tExpected (-27)\n"
	, ft_iterative_power(-4, 3));
	printf("Number (0)\tPower (0)\tResult: %i\tExpected (1)\n"
	, ft_iterative_power(0, 0));
	printf("Number (1)\tPower (2)\tResult: %i\tExpected (1)\n"
	, ft_iterative_power(1, 2));
	printf("Number (5)\tPower (2)\tResult: %i\tExpected (25)\n"
	, ft_iterative_power(5, 2));
	printf("Number (3)\tPower (3)\tResult: %i\tExpected (27)\n"
	, ft_iterative_power(3, 3));
	printf("Number (10)\tPower (5)\tResult: %i\tExpected (100000)\n"
	, ft_iterative_power(10, 5));
}
