/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:08:01 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/25 18:48:39 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	*ft_strdup(char *src)
{
	int		srclen;
	int		index;
	char	*dest;

	srclen = 0;
	while (src[srclen])
		srclen++;
	dest = (char *)malloc(sizeof(char) * srclen + 1);
	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int main(void)
{
	char *src = "Hello World";

	//printf("Dest Str : %s\n", ft_strdup(src));
	printf("Addr Mall : %p\n", ft_strdup(src));
	printf("Addr Src : %p\n", src);
	return (0);
}
/*int main(void)
{
	printf("%s\n", ft_strdup("Bonjour petite merdouille."));
	return (0);
}*/
