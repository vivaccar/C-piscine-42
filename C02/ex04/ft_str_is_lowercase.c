/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:39:11 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/31 16:56:51 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
		printf("%i\n", ft_str_is_lowercase(argv[i]));
		i++;
	}
}*/
