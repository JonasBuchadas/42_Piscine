/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:01:19 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/22 18:44:25 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char    *ft_clean(char *str);

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	char *result;
	char *copy;

	copy = str;
	i = 0;
	while (copy[i])
	{
		j = 0;
		while (copy[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				while (copy[j + i] != '\n')
					j++;
				result = &copy[i];
				result[j + i] = '\0';
				result = ft_clean(result);
				return (result);
			}
			j++;
		}
		i++;
	}
	return (0);
}
