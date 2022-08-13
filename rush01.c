/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtayache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:01:57 by rtayache          #+#    #+#             */
/*   Updated: 2022/06/26 20:15:41 by rtayache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((y == 1 && x_ == x) || (y == y_ && x == 1))
				ft_putchar('\\');
			else if ((x_ == 1 && y_ == 1) || (x_ == x && y_ == y))
				ft_putchar('/');
			else if ((x_ == x && y_ == 1) || (x_ == 1 && y_ == y))
				ft_putchar('\\');
			else if (x_ == 1 || y_ == 1 || x_ == x || y_ == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			x_++;
		}
		y_++;
		ft_putchar('\n');
	}
}
