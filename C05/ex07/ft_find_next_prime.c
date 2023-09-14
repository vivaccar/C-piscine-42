/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:19:11 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/09 18:56:51 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb > 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_find_next_prime(930));
	printf("%i\n", ft_find_next_prime(998));
	printf("%i\n", ft_find_next_prime(854));
	printf("%i\n", ft_find_next_prime(692));
	printf("%i\n", ft_find_next_prime(-20));
	printf("%i", ft_find_next_prime(942));
}*/
