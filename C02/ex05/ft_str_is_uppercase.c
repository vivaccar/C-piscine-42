/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:58:51 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/03 19:23:16 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
		printf("%i\n", ft_str_is_uppercase(argv[i]));
		i++;
	}
}*/
