/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:21:59 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/22 16:16:32 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_clean(char *str)
{
	int 	i;
	int		j;
	char	*result;
	
	result = str;
	i = 0;
	j = 0;
	while (!(str[i] >= 'a' && str[i] <= 'z') ||
			!(str[i] >= 'A' || str[i] <= 'Z'))
		i++;
	while ((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
	{
		result[j] = str[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}	
