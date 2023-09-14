/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:29:30 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/02 22:20:42 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] >= 'A' && src[i] <= 'Z')
			src[i] = src[i] + 32;
		i++;
	}
	if (src[0] >= 'a' && src[0] <= 'z')
		src[0] = src[0] - 32;
	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] < 48) || (src[i] > 57 && src[i] < 65) 
			|| (src[i] > 90 && src[i] < 97) || (src[i] > 122))
			if (src[i + 1] > 96 && src[i + 1] < 123)
				src[i + 1] = src[i + 1] - 32;
		i++;
	}
	return (src);
}

/*#include <stdio.h>

int	 main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%s\n\n", ft_strcapitalize(argv[i]));
		i++;
	}
}*/
