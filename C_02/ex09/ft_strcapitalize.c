/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:37:45 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/26 09:43:36 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

char	*ft_strlowcase(char *str);
int		ft_is_alphanum(char c);
char	ft_upcase(char c);

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	word;

	index = 0;
	word = 0;
	ft_strlowcase(str);
	while (str[index])
	{	
		if (ft_is_alphanum(str[index]) == 1 && word == 0)
		{
			str[index] = ft_upcase(str[index]);
			word = 1;
		}
		else
		{
			if (ft_is_alphanum(str[index]) == 0)
				word = 0;
		}
		index++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}

int	ft_is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	ft_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*int main(void)
  {
  char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

  printf("String: %s\n", str);
  printf("Capitalize: %s\n", ft_strcapitalize(str));
  return (0);
  }*/
