/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:34:56 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/12 20:15:14 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len1(char *str);

int	ft_strncmp(char *s1, char *s2, unsigned int size)
{
	unsigned int	index;
	unsigned int	maxlen;

	index = 0;
	if (str_len1(s1) >= str_len1(s2))
		maxlen = str_len1(s1);
	else
		maxlen = str_len1(s2);
	while (index < maxlen && index < size)
	{
		if ((*(s1 + index)) + '\0' != (*(s2 + index)) + '\0')
			return (((*(s1 + index)) + '\0') - (*(s2 + index)) + '\0');
		index++;
	}
	return (0);
}

unsigned int	str_len1(char *str)
{
	unsigned int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
