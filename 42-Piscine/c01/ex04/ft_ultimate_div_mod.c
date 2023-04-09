/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:33:13 by okavak            #+#    #+#             */
/*   Updated: 2021/11/03 18:01:40 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}
/*
int	main()
{
	int	a = 20;
	int	b = 13;
	ft_ultimate_div_mod(&a,&b);
	printf("%d\n%d\n",a,b);
}*/
