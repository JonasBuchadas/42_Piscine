/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readdict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:29:10 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/22 14:49:28 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int     ft_strlen(char *str);
char    *recursive(char *argv, int len, char *dict, int pos);

char    *read_dict(char *dictname, char *dict, int dictsz, char *argv)
{
    int fd;
    int ret;
    int strlen;

    fd = open(dictname, O_RDONLY);
    ret = read(fd, dict, dictsz);
    strlen = ft_strlen(argv);
	return (recursive(argv, strlen, dict, 0));

}
