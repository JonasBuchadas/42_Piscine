/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:28:18 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/24 20:55:51 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int base_check(char *base, int index)
{
    int index1;
    int baselen;

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	basefrom_len;
	int	baseto_leb;

	basefrom_len = basecheck(base_from, 0);
	baseto_len = basecheck(base_to, 0);
	*/
