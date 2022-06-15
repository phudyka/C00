/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:25:19 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/07 14:44:06 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_display(int i)
{
	int	chiffre1;
	int	chiffre2;

	if (i > 9)
	{
		chiffre1 = i / 10;
		chiffre2 = i % 10;
		ft_putchar(chiffre1 + '0');
		ft_putchar(chiffre2 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(i + 48);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0 - 1;
	while (a++ <= 99)
	{
		b = a;
		while (b++ <= 98)
		{
			ft_display(a);
			ft_putchar(' ');
			ft_display(b);
			if (a < 98 || b < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
