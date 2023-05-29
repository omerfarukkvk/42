/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:52:22 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:52:23 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	int		neg;

	num = 0;
	neg = 1;
	i = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] <= 57 && str[i] >= 48))
	{
		if (num * neg > 2147483647)
			return (-1);
		else if (num * neg < -2147483647)
			return (0);
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return ((int)num * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *p = "   +8sg5";
	printf("%d\n", ft_atoi(p));
	printf("%d", atoi(p));
}
*/
