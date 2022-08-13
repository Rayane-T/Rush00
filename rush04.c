/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:03:45 by rtayache          #+#    #+#             */
/*   Updated: 2022/06/26 20:16:24 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_;
	int	y_;

	y_ = 1;
	while (y_ <= y)
	{
		x_ = 1;
		while (x_ <= x)
		{
			if (y == 1 && x_ == x)
				ft_putchar('C');
			else if ((x_ == 1 && y_ == 1) || (x_ == x && y_ == y))
				ft_putchar('A');
			else if ((x_ == x && y_ == 1) || (x_ == 1 && y_ == y))
				ft_putchar('C');
			else if (x_ == 1 || y_ == 1 || x_ == x || y_ == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x_++;
		}
		ft_putchar('\n');
		y_++;
	}
}
