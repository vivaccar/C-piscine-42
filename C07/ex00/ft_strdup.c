/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:42:38 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/12 19:44:08 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;

	size = ft_strlen(src) + 1;
	if (src == NULL)
		return (NULL);
	dup = (char *) malloc(sizeof(char) * size);
	ft_strcpy(dup, src);
	return (dup);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	char	*a = argv[1];
	char	*b = ft_strdup(a);

	if (argc == 2)
	printf("%s", b);
}*/
