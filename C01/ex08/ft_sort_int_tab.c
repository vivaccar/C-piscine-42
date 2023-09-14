/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:41:11 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/30 21:18:24 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	troca;

	i = 0;
	while (i < size -1)
	{
		if (tab[i] > tab[i + 1])
		{
			troca = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = troca;
			ft_sort_int_tab(tab, size);
		}
		i++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int	array[] = {3, 5, 6, 1, 4, 2};
	int	tam;
	int	i;

	i = 0;
	tam = 6;
	while(i < tam)
	{	
		printf("%i, ", array[i]);
		i++;
	}
	ft_sort_int_tab(array, tam);
	i = 0;
	while(i < tam)
	{
		printf("%i, ", array[i]);
		i++;
	}
}*/
