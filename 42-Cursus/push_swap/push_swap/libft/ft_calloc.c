/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:44:08 by okavak            #+#    #+#             */
/*   Updated: 2022/11/28 00:44:09 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size: sizeof(int),sizeof(char) ...
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
//     int *a;
//     int  i;
//     a = (int *) ft_calloc(10, sizeof(int));
//     for (i=0; i<10; i++) {
//          *(a+i) = (i+1) * 5;
//          printf("değer: %d\n", *(a+i));
//     }
//     free(a);
// }