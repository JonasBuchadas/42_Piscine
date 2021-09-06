/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <jocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:12:01 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/11 11:39:18 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if ((*(str + index) + '0' - 48) < 32)
			return (0);
		if ((*(str + index) + '0' - 48) == 127)
			return (0);
		index++;
	}
	return (1);
}
