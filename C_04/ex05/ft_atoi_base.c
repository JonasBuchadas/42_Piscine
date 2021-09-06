/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:27:30 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/24 13:28:15 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_nonbase_nbr(char c, char *base);
int	base_check1(char *base, int index);
int	ft_isspace1(char c);
int	readnumbers1(char *str, int index, int minuscount, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	baselen;
	int	minuscount;

	baselen = base_check1(base, 0);
	if (baselen <= 1)
		return (0);
	minuscount = 0;
	index = 0;
	while (ft_isspace1(str[index]) != 0)
		index++;
	while (str[index])
	{
		if (check_nonbase_nbr(str[index], base) == 1)
		{
			if (str[index] == '-')
				minuscount++;
			if (!(str[index] == '-' || str[index] == '+'))
				return (0);
		}
		if (check_nonbase_nbr(str[index], base) == 0)
			return (readnumbers1(str, index, minuscount, base));
		index++;
	}
	return (0);
}

int	check_nonbase_nbr(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (0);
		index++;
	}
	return (1);
}

int	base_check1(char *base, int index)
{
	int	index1;
	int	baselen;

	while (base[index])
		index++;
	baselen = index;
	index = 0;
	while (base[index++])
	{
		if (base[index] == '-' || base[index] == '+'
			|| ft_isspace1(base[index]))
			return (0);
	}
	index = 0;
	while (index++ < baselen)
	{
		index1 = index + 1;
		while (index1 < baselen)
		{
			if (base[index] == base[index1++])
				return (0);
		}
	}
	return (baselen);
}

int	ft_isspace1(char c)
{
	if (c == ('\t'))
		return (1);
	if (c == ('\n'))
		return (1);
	if (c == ('\v'))
		return (1);
	if (c == ('\f'))
		return (1);
	if (c == ('\r'))
		return (1);
	if (c == (' '))
		return (1);
	else
		return (0);
}

int	readnumbers1(char *str, int index, int minuscount, char *base)
{
	int	result;
	int	indexbase;
	int	index1;
	int	baselen;

	result = 0;
	index1 = 0;
	while (base[index1])
		index1++;
	baselen = index1;
	while (check_nonbase_nbr(str[index], base) == 0)
	{	
		indexbase = 0;
		while (str[index] != base[indexbase])
			indexbase++;
		result = (result * baselen) + indexbase;
		index++;
	}
	if (minuscount % 2 == 0)
		return (result);
	else
		return (result * -1);
}
#include <stdio.h>
int main(void)
{
	char *base = ",*+";
    char *nb = ",*";

    printf("\t\t TEST 06 - ATOI_BASE\n");


    printf("NBR: \t%s\n", nb);
    printf("BASE: \t%s\n", base);
    printf("ATOI_Base \t%d\n", ft_atoi_base(nb,base));

    printf("\n");

    return (0);
}
