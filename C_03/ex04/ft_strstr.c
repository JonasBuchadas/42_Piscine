/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:00:38 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/25 12:50:22 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <unistd.h>
//#include <string.h>
//#include <stdio.h>

int		ft_str_ncmp(char *s1, char *s2, int size);
int		substr_len(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strstr(char *str, char *to_find)
{
	int		index;
	char	*substr;
	int		size;

	size = 0;
	index = 0;
	substr = str;
	size = substr_len(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[index])
	{
		if (str[index] == to_find[0])
		{
			substr = str + index;
			if (ft_str_ncmp(substr, to_find, size) == 0)
			{
				return (substr);
			}
		}
		index++;
	}
	return (0);
}

int	substr_len(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	ft_str_ncmp(char *s1, char *s2, int size)
{
	int	index;
	int	maxlen;

	index = 0;
	if (substr_len(s1) >= substr_len(s2))
		maxlen = substr_len(s1);
	else
		maxlen = substr_len(s2);
	while (index < maxlen && index < size)
	{
		if (*(s1 + index) + '\0' != *(s2 + index) + '\0')
			return (((*(s1 + index)) + '\0') - (*(s2 + index)) + '\0');
		index++;
	}
	return (0);
}

/*int main(void)
{
	char	*needle = "orl";
	char	*str = "Hello Word World";
	
	printf("String: %s\n", str);
	printf("Needle: %s\n", needle);
	printf("Result C: %s\n", strstr(str, needle));
	printf("Result FT: %s\n", ft_strstr(str, needle));
}*/
