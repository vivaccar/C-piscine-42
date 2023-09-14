/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:05:53 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/31 16:37:52 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	
	i = 1;
	while (i < argc)
	{
		printf("%i\n", ft_str_is_numeric(argv[i]));
		i++;
	}
}*/
