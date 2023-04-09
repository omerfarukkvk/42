/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:46:31 by okavak            #+#    #+#             */
/*   Updated: 2022/11/28 00:46:31 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
-The strdup() function allocates sufficient memory for a copy of the string 
 s1, does the copy, and returns a pointer to it.
*/
char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		n;
	int		l;

	l = ft_strlen(s1);
	n = 0;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[n])
	{
		ptr[n] = s1[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
