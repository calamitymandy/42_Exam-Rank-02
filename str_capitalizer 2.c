/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:54:35 by amdemuyn          #+#    #+#             */
/*   Updated: 2023/03/13 17:57:28 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc >= 2)
	{
		while (argv[i] != '\0')
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] = argv[i][j] + 32;
				if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
					argv[i][0] = argv[i][0] - 32;
				if (argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t')
				{
					if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
						argv[i][j] = argv[i][j] - 32;
				}
				write (1, &argv[i][j], 1);
				j++;
			}
			j = 0;
			i++;
			write (1, "\n", 1);
		}
	}
	else
	write (1, "\n", 1);
}
