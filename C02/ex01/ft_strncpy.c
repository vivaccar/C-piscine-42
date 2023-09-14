/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:19:39 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/03 18:13:03 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "original";
	char	src[] = "stringcopiada";
	char	*r;
	int	t;

	t = 3;
	printf("%s\n%s\n", dest, src);
	r = ft_strncpy(dest, src, t);
	printf("%s\n", strncpy(dest, src, t));
	printf("%s", r);
}*/	
