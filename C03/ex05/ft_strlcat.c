/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:45:04 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/13 12:46:02 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_dest;
	unsigned int	s_src;
	unsigned int	i;
	unsigned int	j;

	s_dest = ft_strlen(dest);
	s_src = ft_strlen(src);
	j = s_dest;
	i = 0;
	if (size <= s_dest || size == 0)
		return (size + s_src);
	while (size > (j + 1) && src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (s_dest + s_src);
}
/*#include <stdio.h>
int	main(void)
{
	char	dest[] = "vamos passar";
	char	src[] = "na piscine";

	printf("%i\n", ft_strlcat(dest, src, 20));
}*/	
