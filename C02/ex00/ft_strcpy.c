/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:51:28 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/02 15:24:56 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	origem[] = "string origem";
	char	destino[] = "aqui recebe a copia";
	char	*r;

	printf("%s\n%s\n", destino, origem);
	r = ft_strcpy(destino, origem);
	printf("%s\n%s\n", destino, origem);
}*/
