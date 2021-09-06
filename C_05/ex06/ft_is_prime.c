/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: j <marvin@42.fr>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:43:14 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/23 14:38:04 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <stdio.h>
int	ft_sqrt(int nb);

int	ft_is_prime(int nb)
{	
	int	step;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	step = ft_sqrt(nb);
	while (step >= 4)
	{	
		if (nb % step == 0)
			return (0);
		step--;
	}
	return (1);
}

int	ft_sqrt(int nb)
{
	int	subtract;
	int	step;

	subtract = 1;
	step = 0;
	while (nb >= 0)
	{
		nb -= subtract;
		if (nb == 0)
			return (step + 1);
		subtract += 2;
		step++;
	}
	return (step + 1);
}

int main(void)
{
	printf("Number (-10)\tResult: %i\tExpected (0)\n", ft_is_prime(-10));
	printf("Number (0)\tResult: %i\tExpected (0)\n", ft_is_prime(0));
	printf("Number (1)\tResult: %i\tExpected (0)\n", ft_is_prime(1));
	printf("Number (2)\tResult: %i\tExpected (1)\n", ft_is_prime(2));
	printf("Number (3)\tResult: %i\tExpected (1)\n", ft_is_prime(3));
	printf("Number (4)\tResult: %i\tExpected (0)\n", ft_is_prime(4));
	printf("Number (5)\tResult: %i\tExpected (1)\n", ft_is_prime(5));
	printf("Number (6)\tResult: %i\tExpected (0)\n", ft_is_prime(6));
	printf("Number (7)\tResult: %i\tExpected (1)\n", ft_is_prime(7));
	printf("Number (6029)\tResult: %i\tExpected (1)\n", ft_is_prime(6029));
	printf("Number (7919)\tResult: %i\tExpected (1)\n", ft_is_prime(7919));
	printf("Number (27644437)\tResult: %i\tExpected (1)\n", ft_is_prime(27644437));
	printf("Number (INT_MAX)\tResult: %i\tExpected (1)\n", ft_is_prime(INT_MAX));
}
