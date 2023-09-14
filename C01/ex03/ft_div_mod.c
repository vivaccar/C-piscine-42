/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:32:33 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/30 20:10:28 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int 	main(void)
{	int	a;
	int	b;
	int	divisao;
	int	modulo;	

	a = 10;
	b = 2;
	ft_div_mod(a, b, &divisao, &modulo);
	printf("A divisao vale %i, o modulo vale %i", divisao, modulo);
}*/
