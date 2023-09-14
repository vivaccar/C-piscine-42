/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:13:31 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/31 18:26:33 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(int argc,char *argv[])
{
	int	i;
	
	i = 0;
	while (i < argc)
	{
		printf("%s\n", ft_strlowcase(argv[i]));
		i++;
	}
}*/
