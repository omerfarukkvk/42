/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:51:43 by okavak            #+#    #+#             */
/*   Updated: 2023/05/26 02:02:00 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	cealing_color(t_cub3d *cub3d)
{
	int	x;
	int	y;

	x = 0;
	while (x < cub3d->width)
	{
		y = 0;
		while (y < cub3d->height / 2)
		{
			cub3d->screen_img_data[y * cub3d->width + x] = cub3d->c_hex;
			y++;
		}
		x++;
	}
}

void	floor_color(t_cub3d *cub3d)
{
	int	x;
	int	y;

	x = 0;
	y = cub3d->height / 2;
	while (x < cub3d->width && y < cub3d->height)
	{
		cub3d->screen_img_data[y * cub3d->width + x] = cub3d->f_hex;
		x++;
		if (x == cub3d->width)
		{
			y++;
			x = 0;
		}
	}
}
