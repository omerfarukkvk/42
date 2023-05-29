/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:54:51 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:54:52 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;
	size_t	end;

	if (s)
	{
		end = 0;
		size = ft_strlen(s);
		if (start < size)
			end = size - start;
		if (end > len)
			end = len;
		str = (char *)malloc(sizeof(char) * end + 1);
		if (!str)
			return (NULL);
		i = 0;
		while (i < end)
			str[i++] = s[start++];
		str[i] = '\0';
		return (str);
	}
	return (0);
}
/*
int main()
{
	char arr[] = "eyupgulercan";
	printf("%zu\n", ft_strlen(arr));
	printf("%s\n",ft_substr(arr, 2, 5 ));
	printf("%zu",ft_strlen((const char *)(ft_substr(arr, 2, 10 ))));
}
*/
