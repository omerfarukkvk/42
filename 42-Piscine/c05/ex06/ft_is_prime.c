/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:55:02 by okavak            #+#    #+#             */
/*   Updated: 2021/11/12 19:55:11 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

/*#include <stdio.h>

int ft_is_prime(int nb);

int		main(void)
{
	printf("-10 = %d (0)\n", ft_is_prime(-10));
	printf("-1 = %d (0)\n", ft_is_prime(-1));
	printf(" 0 = %d (0)\n", ft_is_prime(0));
	printf(" 1 = %d (0)\n", ft_is_prime(1));
	printf(" 2 = %d (1)\n", ft_is_prime(2));
	printf(" 3 = %d (1)\n", ft_is_prime(3));
	printf(" 4 = %d (0)\n", ft_is_prime(4));
	printf(" 5 = %d (1)\n", ft_is_prime(5));
	printf(" 6 = %d (0)\n", ft_is_prime(6));
	printf(" 7 = %d (1)\n", ft_is_prime(7));
	printf(" 8 = %d (0)\n", ft_is_prime(8));
	printf(" 9 = %d (0)\n", ft_is_prime(9));
	printf(" 10 = %d (0)\n", ft_is_prime(10));
	printf(" 11 = %d (1)\n", ft_is_prime(11));
	
}*/
