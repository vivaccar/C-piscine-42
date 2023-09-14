/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:40:12 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/05 21:45:29 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	signal;

	result = 0;
	i = 0;
	signal = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' 
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = signal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * signal);
}

/*#include <stdio.h>
int	main(void)
{
	char	a[] = "--+---+1234ab567";

	printf("%i\n", ft_atoi(a));
}*/
