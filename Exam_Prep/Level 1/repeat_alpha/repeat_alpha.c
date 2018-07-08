/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 16:58:21 by mlamarre          #+#    #+#             */
/*   Updated: 2016/07/20 17:23:02 by mlamarre         ###   ########.fr       */
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
	if (argc != 2)
		ft_putchar('\n');
	else if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				n = argv[1][i] - 64;
				while (n > 0)
				{
					ft_putchar(argv[1][i]);
					n--;
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				n = argv[1][i] - 96;
				while (n > 0)
				{
					ft_putchar(argv[1][i]);
					n--;
				}
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
