/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:10:41 by okavak            #+#    #+#             */
/*   Updated: 2021/10/30 16:56:01 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_yazdir(char y)
{
	write(1, &y, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_yazdir('-');
		ft_yazdir('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_yazdir('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_yazdir(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
