/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:14:46 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/07 15:37:16 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48 - 1;
	while (a++ < 55)
	{
		b = a;
		while (b++ < 56)
		{
			c = b;
			while (c++ < 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
