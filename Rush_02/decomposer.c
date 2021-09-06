/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decomposer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:00:59 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/22 17:54:37 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*decomposer(char *str)
{
	int index;

	index = 0;
	str[index++] = '1';
	while (str[index])
	{
		str[index] = '0';
		index++;
	}
	return (str);
}
/*	while (index >= 0)
	{str[index] 
*/
