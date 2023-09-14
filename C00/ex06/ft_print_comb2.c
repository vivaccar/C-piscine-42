/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:49:07 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/28 16:14:59 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert(int n)
{
	char	a;
	char	b;

	a = n / 10 + 48;
	b = n % 10 + 48;
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			convert(n1);
			write(1, " ", 1);
			convert(n2);
			if (n1 != 98 || n2 != 99)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
