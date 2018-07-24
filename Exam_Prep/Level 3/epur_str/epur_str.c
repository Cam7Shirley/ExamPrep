/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 06:30:02 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/24 06:52:07 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_empty(char *s)
{
	int	index;

	index = 0;
	while (s[index] == ' ')
		index++;
	if (s[index] == '\0')
		return (1);
	return (0);
}

int		trim_front(char *s)
{
	int	index;

	index = 0;
	while (s[index] == ' ')
		index++;
	return (index);
}

void	separate(char *s)
{
	int	index;

	index = trim_front(s);
	while (s[index] != '\0')
	{
		if (s[index] == ' ')
		{
			while (s[index] == ' ')
				index++;
			if (s[index] != '\0')
				write(1, " ", 1);
			else
				break ;
		}
		write(1, &s[index], 1);
		index++;
	}
}

int		main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		if (check_empty(str) == 0)
			separate(str);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
