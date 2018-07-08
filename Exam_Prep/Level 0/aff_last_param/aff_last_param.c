/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 14:09:35 by mlamarre          #+#    #+#             */
/*   Updated: 2017/02/10 14:39:53 by jomakatu         ###   ########.fr       */
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
	int		n;

	i = 0;
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		n = argc - 1;
		while (argv[n][i] != '\0')
		{
			ft_putchar(argv[n][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
