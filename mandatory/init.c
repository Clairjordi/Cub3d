/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:27:04 by mcloarec          #+#    #+#             */
/*   Updated: 2023/01/13 17:45:44 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3D.h"

static void	ft_init_identifier(t_data *data)
{
	data->id.no = NULL;
	data->id.so = NULL;
	data->id.we = NULL;
	data->id.ea = NULL;
	data->id.f = NULL;
	data->id.c = NULL;
}

static void	ft_init_player(t_data *data)
{
	data->player.start = 'O';
	data->player.px = 0;
	data->player.py = 0;
}

static void	ft_init_map(t_data *data)
{
	data->map.matrix = NULL;
	data->map.columns = -1;
	data->map.lines = -1;
}

static void	ft_init_data(t_data *data)
{
	data->file_split = NULL;
}

static void	ft_init_view(t_data *data)
{
	data->view.camerax = 0;
	data->view.dirx = 0;
	data->view.diry = 0;
	data->view.planex = 0;
	data->view.planey = 0;
}

void	ft_init_display(t_display *display)
{
	display->img = NULL;
	display->addr = NULL;
	display->bpp = 0;
	display->l_length = 0;
	display->endian = 0;

}

void	ft_init_struct(t_data *data)
{
	ft_init_data(data);
	ft_init_map(data);
	ft_init_identifier(data);
	ft_init_player(data);
	//ft_init_ray(data);
	ft_init_view(data);
	/* data->display = malloc(sizeof(t_display)); */
	/* if (!data->display) */
	/* 	ft_error_free(data, "Malloc"); */
	/* data->render.display = malloc(sizeof(t_display));	 */
	/* if (!data->render.display) */
	/* 	ft_error_free(data, "Malloc"); */
	ft_init_display(&data->display);
	ft_init_display(data->render.display);
}
