/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:41:05 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/23 11:11:18 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <limits.h>
//#include <stdio.h>

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
	return (0);
}

/*int	main(void)
{
	printf("Number (-9)\tResult: %i\tExpected (0)\n", ft_sqrt(-9));
	printf("Number (-2)\tResult: %i\tExpected (0)\n", ft_sqrt(-2));
	printf("Number (0)\tResult: %i\tExpected (0)\n", ft_sqrt(0));
	printf("Number (1)\tResult: %i\tExpected (1)\n", ft_sqrt(1));
	printf("Number (2)\tResult: %i\tExpected (0)\n", ft_sqrt(2));
	printf("Number (3)\tResult: %i\tExpected (0)\n", ft_sqrt(3));
	printf("Number (4)\tResult: %i\tExpected (2)\n", ft_sqrt(4));
	printf("Number (5)\tResult: %i\tExpected (0)\n", ft_sqrt(5));
	printf("Number (7)\tResult: %i\tExpected (0)\n", ft_sqrt(7));
	printf("Number (9)\tResult: %i\tExpected (3)\n", ft_sqrt(9));
	printf("Number (25)\tResult: %i\tExpected (5)\n", ft_sqrt(25));
	printf("Number (INT_MAX)\tResult: %i\tExpected (0)\n", ft_sqrt(INT_MAX));
	printf("Number (998001)\tResult: %i\tExpected (999)\n", ft_sqrt(998001));
}*/
