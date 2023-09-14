/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:50:41 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/09 18:52:36 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
}*/
