/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:53:11 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:53:12 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	char	*kaynak;
	char	*hedef;
	size_t	i;

	kaynak = (char *)dst;
	hedef = (char *)src;
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		kaynak[i] = hedef[i];
		i++;
	}
	return (kaynak);
}
/*
int main()
{
	char src[] = "aysee";
	char dst[] = "ald";

	printf("%s\n", ft_memcpy(dst, src, 3));
	printf("%s\n", memcpy(dst,src,3));
}
*/
