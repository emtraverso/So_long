/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_close_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etravers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:12:03 by etravers          #+#    #+#             */
/*   Updated: 2023/02/20 19:12:04 by etravers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_freemap(t_mlx *init)
{
	t_tile	**tilemap;
	int		y;

	tilemap = init->map;
	y = init->y;
	while (y--)
	{
		free(*init->map);
		init->map++;
	}
	free(tilemap);
}

int	ft_close(t_mlx *init)
{
	mlx_destroy_window(init->mlx, init->win);
	mlx_destroy_display(init->mlx);
	free(init->mlx);
	ft_freemap(init);
	exit(0);
	return (0);
}
