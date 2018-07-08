/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:01:07 by mlamarre          #+#    #+#             */
/*   Updated: 2016/07/29 14:50:18 by mlamarre         ###   ########.fr       */
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
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z')
			{
				ft_putchar('z');
				break;
			}
			else
			{
				ft_putchar('z');
				break;
			}
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
