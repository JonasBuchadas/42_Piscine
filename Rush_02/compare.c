/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:28:30 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/21 20:19:00 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int     ft_strlen(char *str);

char	*compare(char *dictname, char *dict, int dictsz, char *argv)
{
	int fd;
	int ret;
	int strlen;
	int a;
	int b;

	fd = open(dictname, O_RDONLY);
	ret = read(fd, dict, dictsz);
	strlen = ft_strlen(argv);
	a = 0;
	b = 0;
	while (a <= strlen)
	{	
		while (dict[b] != '\0')
		{
			if (argv[a] == dict[b])
			{
				while (dict[b] != ':')
				{
					while (dict[b] != '\n')
					{
						
					}
					b++;
				}
				//printf("%d\n", b);
				break;
			}
		b++;
		}
	a++;
	b = 0;
	}	
	return (dict);
}	
