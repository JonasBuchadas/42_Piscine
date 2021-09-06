/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:01:30 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/22 17:10:42 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int 	dictsize(char *dictname);
char    *read_dict(char *dictname, char *dict, int dictsz, char *argv);

int main(int argc, char **argv)
{
	int 	strlen;
	char	*dictname = "numbers.dict";
	int		dictsz;
	char	*dict;

	strlen = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-')
		{
			ft_putstr("Error\n");
			return (0);
		}
//	decomposer(argv[1], strlen);
	
	}
/*	if (argc == 3)
	{

	}
*/
	dictsz = dictsize(dictname);
	dict = (char *)malloc(dictsz * sizeof(char));
	ft_putstr(read_dict(dictname, dict, dictsz, argv[1]));
	free(dict);
	return (0);
}
