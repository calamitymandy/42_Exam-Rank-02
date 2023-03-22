/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:38:53 by amdemuyn          #+#    #+#             */
/*   Updated: 2023/01/10 16:32:05 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 1)
		write (1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_capitalizer(argv[i]);
			i++;
		}
	}
	return (0);
}
