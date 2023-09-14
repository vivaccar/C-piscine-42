/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:05:44 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/12 19:49:21 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * size);
	if (*range == NULL)
	{
		*range = 0;
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	min;
	int	max;
	int	size;
	int	*ar;
	int	i;

	(void)	argc;
	i = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = ft_ultimate_range(&ar, min, max);
	while (i < size)
	{
		printf("%i", ar[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("\nO tamanho sera %i", size);
}*/
