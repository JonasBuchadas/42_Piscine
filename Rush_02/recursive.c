/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:20:51 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/22 22:58:34 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char 	*ft_strstr(char *str, char *to_find);
char    *decomposer(char *str);

char	*recursive(char *argv, int len, char *dict, int pos)
{
	char *str;
	
	pos = 0;	
	if (len == 1)
		str = ft_strstr(dict, argv);
	if ((len == 2 && argv[0] == '1') || (len == 2 && argv[1] == '0'))
		str = ft_strstr(dict, argv);
	//	printf("%s", dict);
	if (len >= 3)
	{
		if (argv[0] != '0')
		{
			str = ft_strstr(dict, decomposer(argv));

		//	str = strcat(ft_strstr(dict, argv[pos]), 
		//	recursive(decomposer(argv), len, dict, pos));
		}
	}

	return (str);
}	
