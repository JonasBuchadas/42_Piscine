/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:29:22 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/12 17:16:10 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	str_len(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	maxlen;

	index = 0;
	if (str_len(s1) >= str_len(s2))
		maxlen = str_len(s1);
	else
		maxlen = str_len(s2);
	while (index < maxlen)
	{
		if (*(s1 + index) + '\0' != *(s2 + index) + '\0')
			return (((*(s1 + index)) + '\0') - (*(s2 + index)) + '\0');
		index++;
	}
	return (0);
}

int	str_len(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
