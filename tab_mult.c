/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:10:31 by amdemuyn          #+#    #+#             */
/*   Updated: 2023/01/16 18:50:06 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	num = 0;

	while (*str >= '0' && *str <= '9')
	{
		num = num * 10;
		num = num + *str - '0';
		str++;
	}
	return (num);
}

void	ft_putnbr(int num)
{
	if (num >= 10)
		ft_putnbr(num / 10);
	char c = (num % 10) + '0';
	write (1, &c, 1);
}

void	tab_mult(char *str)
{
	int	i;
	int	num;

	i = 1;
	num = ft_atoi(str);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(i * num);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
