/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:56:50 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/23 11:14:26 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <limits.h>
int	ft_is_prime(int nb);
int	ft_sqrt(int nb);

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

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
/*int	main(void)
{
	printf("Number (-10)\tResult: %i\tExpected (2)\n", ft_find_next_prime(-10));
	printf("Number (3)\tResult: %i\tExpected (3)\n", ft_find_next_prime(3));
	printf("Number (4)\tResult: %i\tExpected (5)\n", ft_find_next_prime(4));
	printf("Number (632)\tResult: %i\tExpected (641)\n", ft_find_next_prime(632));
	printf("Number (27644438)\tResult: %i\n", ft_find_next_prime(27644438));
	printf("Number (INT_MAX - 10000)\tResult: %i\n"
	, ft_find_next_prime(INT_MAX - 10000));
}*/
