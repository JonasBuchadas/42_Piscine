/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:49:03 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/21 18:09:28 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 4096

int dictsize(char *dict)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		printf("File didnt open\n");
		return (-1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	close(fd);
	return (ret);
}

