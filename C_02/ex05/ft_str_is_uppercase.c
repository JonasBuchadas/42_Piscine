/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:00:49 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/10 15:01:30 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (!(*(str + index) >= 'A' && *(str + index) <= 'Z'))
			return (0);
		index++;
	}
	return (1);
}
