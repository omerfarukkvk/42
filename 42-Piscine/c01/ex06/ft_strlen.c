/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:15:49 by okavak            #+#    #+#             */
/*   Updated: 2021/11/04 14:04:05 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		a++;
		str++;
	}
	return (a);
}
/*
int	main()
{
	ft_strlen("Hello World");
}*/