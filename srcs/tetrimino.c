/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tetrimino.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/18 12:17:13 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/28 12:18:05 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

t_point		*point_new(int x, int y)
{
	t_point	*point;

	point = ft_memalloc(sizeof(t_point));
	point->x = x;
	point->y = y;
	return (point);
}

t_etris		*tetris_new(char **pos, int width, int height, char value)
{
	t_etris	*tetris;

	tetris = ft_memalloc(sizeof(t_etris));
	tetris->pos = pos;
	tetris->width = width;
	tetris->height = height;
	tetris->value = value;
	return (tetris);
}

void		free_tetris(t_etris *tetris)
{
	int	y;

	y = 0;
	while (y < tetris->height)
	{
		ft_memdel((void **)(&(tetris->pos[y])));
		y++;
	}
	ft_memdel((void **)(&(tetris->pos)));
	ft_memdel((void **)&tetris);
}

t_list		*free_list(t_list *list)
{
	t_etris	*tetris;
	t_list	*next;

	while (list)
	{
		tetris = (t_etris *)list->content;
		next = list->next;
		free_tetris(tetris);
		ft_memdel((void **)&list);
		list = next;
	}
	return (NULL);
}
