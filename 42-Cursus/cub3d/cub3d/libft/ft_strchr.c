/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:53:49 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:53:50 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	p;

	i = 0;
	p = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == p)
			return ((char *)&s[i]);
		i++;
	}
	if (p == s[i])
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "salih burak";
	printf("%s", ft_strchr(s, 'b'));
}
*/
