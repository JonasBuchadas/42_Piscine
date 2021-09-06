/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:25:17 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/13 10:34:25 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putnbr(int nb);
int		find_digits(int nb);
void	print_digits(unsigned int nb, int digits);
int		power_10(int exp);

void	ft_putnbr(int nb)
{
	int				digits;
	unsigned int	unb;

	unb = nb;
	digits = find_digits(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		unb *= -1;
	}
	print_digits(unb, digits);
}

int	find_digits(int nb)
{
	int	digits;

	digits = 1;
	while (nb / 10 != 0)
	{
		digits++;
		nb /= 10;
	}
	return (digits);
}

void	print_digits(unsigned int nb, int digits)
{
	int	digit;
	int	power;

	while (digits >= 1)
	{
		power = power_10(digits);
		digit = nb / power;
		digit = digit + 48;
		write(1, &digit, 1);
		digits--;
		nb %= power;
	}
}

int	power_10(int exp)
{
	int	result;

	result = 1;
	while (exp > 1)
	{
		result *= 10;
		exp--;
	}
	return (result);
}	
