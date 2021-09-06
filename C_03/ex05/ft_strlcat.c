/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:12:54 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/25 12:49:10 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <string.h>

unsigned int	string_len(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n1;
	unsigned int	n2;

	n1 = 0;
	n2 = 0;
	if (size <= string_len(dest))
		return (string_len(src) + size);
	while (dest[n1] != '\0' && n1 < size)
		n1++;
	n2 = n1;
	while (src[n1 - n2] != '\0' && n1 < size - 1)
	{
		dest[n1] = src[n1 - n2];
		n1++;
	}
	if (n2 < size)
		dest[n1] = '\0';
	return (n2 + string_len(src));
}

unsigned int	string_len(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

/*int main(void)
{
	char	str1[15] = "Hello ";
	char	str2[15] = "Hello ";
	char	str3[15] = "World";
	char	str4[15] = "World";
	int		size = 10;

	printf("Src: %s\n", str1);
	printf("Dest: %s\n", str3);
	printf("C: %lu\n", strlcat(str1, str3, size));
	printf("FT: %u\n", ft_strlcat(str2, str4, size));
	printf("C Str: %s\n", str1);
	printf("FT Str: %s\n", str2);
}*/
