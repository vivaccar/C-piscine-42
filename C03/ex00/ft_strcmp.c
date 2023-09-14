/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:58:32 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/03 13:22:58 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	r = s1[i] - s2[i];
	return (r);
}

/*#include <stdio.h>
int	main(void)
{
	char	a[] = "abcde";
	char	b[] = "abcdf";
	char	c[] = "12345";
	char	d[] = "123";
	char	e[] = "hello";
	char	f[] = "hello";

	printf("%i\n", ft_strcmp(a, b));
	printf("%i\n", ft_strcmp(c, d));
	printf("%i\n", ft_strcmp(e, f));
}*/	
