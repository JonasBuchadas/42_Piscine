/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:28:00 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/23 16:08:09 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (result * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	printf("Number (-1)\tPower (2)\tResult: %i\tExpected (1)\n"
	, ft_recursive_power(-1, 2));
	printf("Number (10)\tPower (-2)\tResult: %i\tExpected (0)\n"
	, ft_recursive_power(10, -2));
	printf("Number (-3)\tPower (3)\tResult: %i\tExpected (-27)\n"
	, ft_recursive_power(-3, 3));
	printf("Number (-1)\tPower (0)\tResult: %i\tExpected (-1)\n"
	, ft_recursive_power(-1, 0));
	printf("Number (1)\tPower (2)\tResult: %i\tExpected (1)\n"
	, ft_recursive_power(1, 2));
	printf("Number (5)\tPower (2)\tResult: %i\tExpected (25)\n"
	, ft_recursive_power(5, 2));
	printf("Number (3)\tPower (3)\tResult: %i\tExpected (27)\n"
	, ft_recursive_power(3, 3));
	printf("Number (10)\tPower (5)\tResult: %i\tExpected (100000)\n"
	, ft_recursive_power(10, 5));
	printf("Number (2)\tPower (0)\tResult: %i\tExpected (1)\n"
	, ft_recursive_power(2, 0));
}
