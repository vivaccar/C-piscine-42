/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:31:33 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/30 20:36:02 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	troca;
	int	inicio;
	int	fim;

	inicio = 0;
	fim = size - 1;
	while (inicio < fim)
	{
		troca = tab[inicio];
		tab[inicio] = tab[fim];
		tab[fim] = troca;
		inicio++;
		fim --;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;
	int	j;
	int	tam;

	tam = 9;
	i = 0;
	j = 0;
	while (i < tam)
	{
		printf("%i ", array[i]);
		i++;
	}
	ft_rev_int_tab(array, tam);
	while (j < tam)
	{
		printf("%i ", array[j]);
		j++;
	}
}*/
