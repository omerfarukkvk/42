/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:52:48 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:52:50 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
/*
int main()
{
	char	a;
	a = 'a';
	printf("%d", ft_isdigit(a));
}
*/
