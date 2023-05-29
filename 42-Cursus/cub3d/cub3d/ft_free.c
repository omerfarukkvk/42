/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:51:28 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:51:29 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	ft_free_paths(char **no, char **so, char **we, char **ea)
{
	int	i;

	i = 0;
	while (no[i])
		free(no[i++]);
	free(no);
	i = 0;
	while (so[i])
		free(so[i++]);
	free(so);
	i = 0;
	while (we[i])
		free(we[i++]);
	free(we);
	i = 0;
	while (ea[i])
		free(ea[i++]);
	free(ea);
}
