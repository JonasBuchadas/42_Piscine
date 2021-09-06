/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:07:23 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/10 14:36:42 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= '[' && *(str + index) <= '`')
			return (0);
		if (*(str + index) < 'A' || (*(str + index) > 'z'))
			return (0);
		index++;
	}
	return (1);
}
