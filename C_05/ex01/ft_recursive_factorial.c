/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:40:37 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/19 11:20:35 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (nb);
	return (result * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	printf("Number (-1)\tResult: %i\tExpected (0)\n", ft_recursive_factorial(-1));
	printf("Number (0)\tResult: %i\tExpected (1)\n", ft_recursive_factorial(0));
	printf("Number (1)\tResult: %i\tExpected (1)\n", ft_recursive_factorial(1));
	printf("Number (2)\tResult: %i\tExpected (2)\n", ft_recursive_factorial(2));
	printf("Number (3)\tResult: %i\tExpected (6)\n", ft_recursive_factorial(3));
	printf("Number (4)\tResult: %i\tExpected (24)\n", ft_recursive_factorial(4));
	printf("Number (5)\tResult: %i\tExpected (120)\n", ft_recursive_factorial(5));
	printf("Number (6)\tResult: %i\tExpected (720)\n", ft_recursive_factorial(6));
}*/
