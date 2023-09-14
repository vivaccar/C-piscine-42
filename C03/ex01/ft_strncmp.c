/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:23:54 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/05 19:27:52 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n) 
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	a[] = "abcde";
	char	b[] = "abcdefg";
	char	c[] = "hellofriend";
	char	d[] = "helloworld";
	char	e[] = "123456";
	char	f[] = "1098";

	printf("%i\n", ft_strncmp(a, b, 6));
	printf("%i\n", ft_strncmp(c, d, 5));
	printf("%i\n", ft_strncmp(e, f, 4));

}*/
