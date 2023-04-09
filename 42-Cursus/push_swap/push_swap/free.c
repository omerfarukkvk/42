/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:28:43 by okavak            #+#    #+#             */
/*   Updated: 2022/11/25 15:28:43 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_without_free(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	error(t_stack *data)
{
	ft_free(data);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_free(t_stack *data)
{
	int	i;

	i = 0;
	if (data->a_s)
		free (data->a_s);
	if (data->b_s)
		free (data->b_s);
	if (data->sorted)
		free (data->sorted);
	while (data->numbers[i])
	{
		free(data->numbers[i]);
		i++;
	}
	free(data->numbers);
	free (data);
}
