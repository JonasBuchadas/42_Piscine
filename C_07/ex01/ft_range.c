/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:17:27 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/25 18:13:09 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	index;

	if (min >= max)
		return (0);
	range = max - min;
	array = (int *)malloc(sizeof(*array) * range);
	index = 0;
	while (index < range)
	{
		array[index] = min + index;
		index++;
	}
	return (array);
}

/*int main(void)
{
	int min = 3;
	int max = 6;
	int *array = ft_range(min, max);
	int index = 0;
	int range = max - min;

	while(index < range)
	{
		printf("%d ", array[index]);
		index++;
	}
	free(array);
}*/
/*int main()
{
	int *range = ft_range(-15, -20);
	if (range == NULL)
	{
		printf("NULL pointer has been returned.\n");
		return (0);
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}*/
