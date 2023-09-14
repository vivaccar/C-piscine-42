/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:42:15 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/09 12:06:32 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_sqrt(400));
	printf("%i", ft_sqrt(1024));
	printf("%i", ft_sqrt(10));
	printf("%i", ft_sqrt(81));
}*/
