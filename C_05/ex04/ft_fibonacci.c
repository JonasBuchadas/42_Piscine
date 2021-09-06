/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:18:30 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/19 14:14:39 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int	main(void)
{	
	printf("Number (-10)\tResult: %i\tExpected (-1)\n", ft_fibonacci(-10));
	printf("Number (-1)\tResult: %i\tExpected (-1)\n", ft_fibonacci(-1));
	printf("Number (0)\tResult: %i\tExpected (0)\n", ft_fibonacci(0));
	printf("Number (1)\tResult: %i\tExpected (1)\n", ft_fibonacci(1));
	printf("Number (2)\tResult: %i\tExpected (1)\n", ft_fibonacci(2));
	printf("Number (3)\tResult: %i\tExpected (2)\n", ft_fibonacci(3));
	printf("Number (4)\tResult: %i\tExpected (3)\n", ft_fibonacci(4));
	printf("Number (5)\tResult: %i\tExpected (5)\n", ft_fibonacci(5));
	printf("Number (6)\tResult: %i\tExpected (8)\n", ft_fibonacci(6));
	printf("Number (7)\tResult: %i\tExpected (13)\n", ft_fibonacci(7));
	printf("Number (8)\tResult: %i\tExpected (21)\n", ft_fibonacci(8));
	printf("Number (9)\tResult: %i\tExpected (34)\n", ft_fibonacci(9));
	printf("Number (10)\tResult: %i\tExpected (55)\n", ft_fibonacci(10));
}*/
