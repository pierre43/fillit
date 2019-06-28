/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/18 12:04:35 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/18 12:04:40 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int			main(int argc, char **argv)
{
	t_list	*list;
	t_map	*map;

	if (argc != 2)
	{
		ft_putstr("utilisation : fillit input_file\n ");
		return (1);
	}
	if ((list = read_tetri(open(argv[1], O_RDONLY), NULL, 'A', NULL)) == NULL)
	{
		ft_putstr("error\n");
		return (1);
	}
	map = solve(list);
	print_map(map);
	free_map(map);
	free_list(list);
	return (0);
}
