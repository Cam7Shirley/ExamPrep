/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:07:46 by mlamarre          #+#    #+#             */
/*   Updated: 2016/07/14 11:25:36 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		while (argv[1][i] != '\0')
			i++;
		i = i - 1;
		while (i >= 0)
		{
			ft_putchar(argv[1][i]);
			i--;
		}
		ft_putchar('\n');
	}
	return (0);
}
