/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:17:52 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/12 19:46:01 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *) malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*ar;
	int	min;
	int	max;
	int	size;
	int	i;

	(void)	argc;
	i = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = max - min;
	if (argc == 3)
		ar = ft_range(min, max);
	while (i < size)
	{
		printf("%i", ar[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
}*/
