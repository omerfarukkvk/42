/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:54:15 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:54:16 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	k = 0;
	if (dstsize != 0)
	{
		while (src[k] != '\0' && k < dstsize - 1)
		{
			dest[k] = src[k];
			k++;
		}
		dest[k] = '\0';
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "burak";
	char dest[] = "merdo";
	printf("%lu\n", ft_strlcpy(dest, src, 5));
	printf("%s\n", dest);
	//printf("%lu\n", strlcpy(dest, src, 5));
	//printf("%s", dest);
}
*/
