/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:29:37 by okavak            #+#    #+#             */
/*   Updated: 2022/11/25 15:29:37 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	my_atoi(const char *str, t_stack *data)
{
	int		i;
	int		sign;
	long	number;

	sign = 1;
	number = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		number = (number * 10) + (str[i] - 48) * sign;
		if (number > 2147483647)
			error(data);
		if (number < -2147483648)
			error(data);
		i++;
	}
	return (number);
}

void	selection_sort(t_stack *data)
{
	int	i;
	int	min;
	int	j;
	int	tmp;

	i = 0;
	while (i < data->a_len)
	{
		min = i;
		j = i + 1;
		while (j < data->a_len)
		{
			if (data->sorted[j] < data->sorted[min])
				min = j;
			j++;
		}
		tmp = data->sorted[i];
		data->sorted[i] = data->sorted[min];
		data->sorted[min] = tmp;
		i++;
	}
}
