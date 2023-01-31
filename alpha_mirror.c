/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:13:27 by amdemuyn          #+#    #+#             */
/*   Updated: 2023/01/12 18:40:00 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 219 - argv[1][i];
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = 155 - argv[1][i];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
