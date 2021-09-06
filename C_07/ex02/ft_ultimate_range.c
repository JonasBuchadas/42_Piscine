/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:42:27 by jocaetan          #+#    #+#             */
/*   Updated: 2021/08/25 18:14:21 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array != NULL)
	{
		*range = array;
		index = 0;
		while (index < (max - min))
		{
			array[index] = min + index;
			index++;
		}
		return (max - min);
	}
	else
	{
		*range = NULL;
		return (-1);
	}
}	

/*int main (void)
{
	int min = 3;
	int max = 6;
	int *range;
	int size = 0;

	size = ft_ultimate_range(&range, min, max);
	return (0);
}*/
/*int main()
{
	int *range;
	int taille;

	taille = ft_ultimate_range(&range, 5, 4);
	printf("Taille = %d\n",taille);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	for (int i = 0; i < taille; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}*/
