/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:10:26 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/30 20:18:10 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}

/*#include <stdio.h>
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 20;
	n2 = 5;
	ft_ultimate_div_mod(&n1, &n2);
	printf("O resultado da divisao vale %i, O resto vale %i", n1, n2);
}*/
