/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:54:01 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:54:03 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}
/*
void	f(unsigned int a, char *b)
{
	int alpha;
	alpha = a;
	int i;
	i = 0;
	while (b[i] != '\0')
	{
		b[i] = b[i] + 1;
		i++;
	}
}

int main()
{
	char arr[] = "eyup";
	ft_striteri(arr, f);
	printf("%s", arr);
}
*/
