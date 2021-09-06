/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:42:08 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/18 21:16:57 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		str_len(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		swap;
	int		rep;
	char	*temp;

	rep = 0;
	while (++rep < argc - 1)
	{	
		swap = 1;
		while (swap < argc - rep)
		{	
			if (ft_strcmp(argv[swap], argv[swap + 1]) > 0)
			{
				temp = &argv[swap + 1][0];
				argv[swap + 1] = &argv[swap][0];
				argv[swap] = &temp[0];
			}
			swap++;
		}
	}
	swap = 0;
	while (++swap < argc)
	{
		ft_putstr(argv[swap]);
		ft_putchar('\n');
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	maxlen;

	index = 0;
	if (str_len(s1) >= str_len(s2))
		maxlen = str_len(s1);
	else
		maxlen = str_len(s2);
	while (index < maxlen)
	{
		if (*(s1 + index) + '\0' != *(s2 + index) + '\0')
			return (((*(s1 + index)) + '\0') - (*(s2 + index)) + '\0');
		index++;
	}
	return (0);
}

int	str_len(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		ft_putchar(str[n]);
		n++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
