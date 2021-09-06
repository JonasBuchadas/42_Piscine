/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:50:58 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/24 15:47:58 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}

int	main(void)
{
	printf("Number (-1)\tResult: %i\tExpected (0)\n", ft_iterative_factorial(-1));
	printf("Number (0)\tResult: %i\tExpected (1)\n", ft_iterative_factorial(0));
	printf("Number (1)\tResult: %i\tExpected (1)\n", ft_iterative_factorial(1));
	printf("Number (2)\tResult: %i\tExpected (2)\n", ft_iterative_factorial(2));
	printf("Number (3)\tResult: %i\tExpected (6)\n", ft_iterative_factorial(3));
	printf("Number (4)\tResult: %i\tExpected (24)\n", ft_iterative_factorial(4));
	printf("Number (5)\tResult: %i\tExpected (120)\n", ft_iterative_factorial(5));
	printf("Number (6)\tResult: %i\tExpected (720)\n", ft_iterative_factorial(120));
}
