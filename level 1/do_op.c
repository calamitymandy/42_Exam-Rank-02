/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:29:20 by amdemuyn          #+#    #+#             */
/*   Updated: 2023/03/22 18:31:53 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
}
