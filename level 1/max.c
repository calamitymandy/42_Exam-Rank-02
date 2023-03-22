/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:30:45 by amdemuyn          #+#    #+#             */
/*   Updated: 2023/01/09 18:43:41 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int	i;
	int	res;

	i = 0;
	if (!tab)
		return (0);
	res = tab[0];
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}

/*int	main(void)
{
	int tab[] = {1, 5, -6, 99, 52, 63};
	printf("%d", max(tab, 6));
	return (0);
}*/
