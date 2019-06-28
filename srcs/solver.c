/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solver.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/18 12:17:05 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/18 12:17:09 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_buff(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
		i++;
	if (buf[i - 2] == '\n')
		return (0);
	return (1);
}

int		solve_map(t_map *map, t_list *list)
{
	t_point		point;
	t_etris		*tetri;

	if (list == NULL)
		return (1);
	point.y = 0;
	tetri = (t_etris *)(list->content);
	while (point.y < map->size - tetri->height + 1)
	{
		point.x = 0;
		while (point.x < map->size - tetri->width + 1)
		{
			if (place(tetri, map, point.x, point.y))
			{
				if (solve_map(map, list->next))
					return (1);
				else
					set_piece(tetri, map, point_new(point.x, point.y), '.');
			}
			(point.x)++;
		}
		(point.y)++;
	}
	return (0);
}

int		high_sqrt(int n)
{
	int		size;

	size = 2;
	while (size * size < n)
		size++;
	return (size);
}

t_map	*solve(t_list *list)
{
	t_map	*map;
	int		size;

	size = high_sqrt(ft_lstcount(list) * 4);
	map = new_map(size);
	while (!solve_map(map, list))
	{
		size++;
		free_map(map);
		map = new_map(size);
	}
	return (map);
}
