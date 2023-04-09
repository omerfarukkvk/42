/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:42:49 by okavak            #+#    #+#             */
/*   Updated: 2022/11/28 00:42:49 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//We can set (any character) and (0 or -1 {integer value}) to a memory block.
//Function writes n bytes of value c (cnvrtd to an unsigned char) to the str.
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)b + i) = c;
		i++;
	}
	return (b);
}
