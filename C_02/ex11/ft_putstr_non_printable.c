/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable1.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:38:16 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/26 14:34:46 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	w;

	i = 0;
	while (str[i])
	{
		w = str[i];
		if (!(w >= 32 && w <= 126))
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[w / 16], 1);
			write(1, &"0123456789abcdef"[w % 16], 1);
		}
		else
			write(1, &w, 1);
		i++;
	}
}

/*int		main(void)
  {
  char	*string;

  string = "Coucou\ntu vas bien ?";
  ft_putstr_non_printable(string);
  }*/
