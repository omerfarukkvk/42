/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:53:14 by okavak            #+#    #+#             */
/*   Updated: 2021/10/30 16:54:00 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_yazdir(char a)
{
	write(1, &a, 1);
}

void	ft_diziler(int max, int max2)
{
	ft_yazdir(max / 10 + 48);
	ft_yazdir(max % 10 + 48);
	ft_yazdir(32);
	ft_yazdir(max2 / 10 + 48);
	ft_yazdir(max2 % 10 + 48);
	if (max != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_diziler(a, b);
			b++;
		}
		a++;
	}
}
