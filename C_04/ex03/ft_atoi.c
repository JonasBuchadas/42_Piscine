/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:02:42 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/16 20:06:23 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	readnumbers(char *str, int index, int minuscount);
int	ft_isspace(int c);

int	ft_atoi(char *str)
{
	int	index;
	int	minuscount;

	minuscount = 0;
	index = 0;
	while (ft_isspace(str[index]) != 0)
		index++;
	while (str[index])
	{	
		if (!(str[index] >= '0' && str[index] <= '9'))
		{
			if (str[index] == '-')
				minuscount++;
			if (!(str[index] == '-' || str[index] == '+'))
				return (0);
		}
		if (str[index] >= '0' && str[index] <= '9')
			return (readnumbers(str, index, minuscount));
		index++;
	}
	return (0);
}

int	readnumbers(char *str, int index, int minuscount)
{
	int	result;

	result = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - 48);
		index++;
	}
	if (minuscount % 2 == 0)
		return (result);
	else
		return (result * -1);
}

int	ft_isspace(int c)
{
	if (c == ('\t' - '\0'))
		return (1);
	if (c == ('\n' - '\0'))
		return (1);
	if (c == ('\v' - '\0'))
		return (1);
	if (c == ('\f' - '\0'))
		return (1);
	if (c == ('\r' - '\0'))
		return (1);
	if (c == (' ' - '\0'))
		return (1);
	else
		return (0);
}
