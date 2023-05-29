/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:54:11 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:54:12 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	k = 0;
	while (src[k] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[k];
		k++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[k]));
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dst[] = "eyup";
	char src[] = "guler";

	printf("%lu", ft_strlcat(dst, src, 4));
	printf("%s", dst);
	//printf("%lu", strlcat(dst,src,5));
	//printf("%s",dst);
}
*/
