/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 21:35:21 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/20 08:54:33 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 0)
	{
		str = argv[0];
		ft_putstr(str);
		ft_putchar('\n');
	}
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
