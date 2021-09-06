/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:57:34 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/10 14:59:20 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (!(*(str + index) >= 'a' && *(str + index) <= 'z'))
			return (0);
		index++;
	}
	return (1);
}
