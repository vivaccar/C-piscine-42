/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:08:04 by vivaccar          #+#    #+#             */
/*   Updated: 2023/09/09 17:23:52 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[argc][i] != '\0')
	{
		ft_putchar(argv[argc][i]);
		i++;
	}
	ft_putchar('\n');
}
