/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:53:15 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:53:16 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if ((size_t) dest - (size_t) src < len)
	{
		i = len - 1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i--;
		}
	}
	else
	{
		while ((size_t)i < len)
		{
			((char *) dest)[i] = ((const char *) src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int main()
{
	char dest[] = "heloiooo";
	char src[] = "eyu";
	ft_memmove(dest,src,3);
	printf("%s",dest);
	printf("\n");
	memmove(dest,src,3);
	printf("%s",dest);
}
*/
