/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:29:30 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/13 10:47:44 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

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

int	total_size(char **strs, int size, int sep)
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	total = total + (sep * (size - 1));
	return (total + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_size;
	int		full_size;
	int		i;
	char	*result;

	i = 0;
	sep_size = ft_strlen(sep);
	full_size = total_size(strs, size, sep_size);
	if (size <= 0)
	{
		result = (char *)malloc(1);
		result[0] = '\0';
	}
	result = (char *)malloc(sizeof(char) * (full_size));
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*sep;

	sep = "-->";
	printf("%s", ft_strjoin((argc - 1), (argv + 1), sep));
}*/
