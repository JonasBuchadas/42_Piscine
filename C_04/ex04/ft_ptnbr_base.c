/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnbr_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:19:19 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/24 10:24:44 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar1(char c);
int		base_len(char *base);
int		base_check(char *base, int baselen);

void	ft_putnbr_base(int nbr, char *base)
{
	int				baselen;
	int				nbrs[256];
	int				index;
	unsigned int	pos_nbr;

	baselen = base_len(base);
	if (base_check(base, baselen) == 0 || baselen <= 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar1('-');
		pos_nbr = nbr * -1;
	}
	else
		pos_nbr = nbr;
	index = 0;
	while (pos_nbr != 0)
	{
		nbrs[index++] = pos_nbr % baselen;
		pos_nbr /= baselen;
	}
	while (--index >= 0)
	{
		ft_putchar1(base[nbrs[index]]);
	}
}

int	base_len(char *base)
{
	int	index;

	index = 0;
	while (base[index])
		index++;
	return (index);
}

int	base_check(char *base, int baselen)
{
	int	index;
	int	index1;

	index = 0;
	while (base[index])
	{
		if (base[index] == '-' || base[index] == '+')
			return (0);
		index++;
	}
	index = 0;
	while (index < baselen)
	{	
		index1 = index + 1;
		while (index1 < baselen)			// Nao verifica ult. dig. bases?
		{
			if (base[index] == base[index1++])	
				return (0);
		}
		index++;
	}
	return (1);
}

void	ft_putchar1(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char 	*base = "poneyvif";
	int		nbr = 5454;

	printf("\t\t TEST 05 - PUTNBR_BASE\n");


	printf("NBR: \t%i\n", nbr);
	printf("BASE: \t%s\n", base);
	ft_putnbr_base(nbr,base);

	printf("\n");
}
