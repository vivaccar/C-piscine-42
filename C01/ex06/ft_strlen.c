/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:42:57 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/30 20:32:06 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	contagem;

	contagem = 0;
	while (*str != '\0')
	{
		contagem++;
		str++;
	}
	return (contagem);
}

/*#include <stdio.h>

int	main(void)
{
	char	string[8] = "vinicius";
	int	total;
	
	total = ft_strlen(string);
	printf("%i", total);	
}*/
