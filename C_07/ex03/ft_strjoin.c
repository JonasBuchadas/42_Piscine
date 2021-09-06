/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:19:58 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/25 18:10:42 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
#include <stdlib.h>

int	totallenght(int size, char **strs, char *sep);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		strindex;
	char	*conc;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str = (char *)malloc(sizeof(char) * totallenght(size, strs, sep));
	if (str == NULL)
		return (0);
	strindex = 0;
	conc = str;
	while (strindex < size)
	{
		ft_strcpy(conc, strs[strindex]);
		conc += ft_strlen(strs[strindex]);
		if (strindex < size - 1)
		{
			ft_strcpy(conc, sep);
			conc += ft_strlen(sep);
		}
		strindex++;
	}
	*conc = '\0';
	return (str);
}

int	totallenght(int size, char **strs, char *sep)
{
	int	strindex;
	int	total;

	total = 0;
	strindex = 0;
	while (strindex < size)
	{
		total += ft_strlen(strs[strindex]);
		strindex++;
	}
	total += ft_strlen(sep) * (size - 1) + 1;
	return (total);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, " | "));
	return (0);
}*/
/*int main()
{
	char *tablo[6];
	tablo[0] = "coucou";
	tablo[1] = "bite";
	tablo[2] = "fesse";
	tablo[3] = "de";
	tablo[4] = "la";
	tablo[5] = "merde";
	printf("%s\n", ft_strjoin(6, tablo, "!"));
	return (0);
}*/
