/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/20 10:33:12 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/28 12:21:08 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_map
{
	int				size;
	char			**array;
}					t_map;

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_etris
{
	char			**pos;
	int				width;
	int				height;
	char			value;
}					t_etris;

t_list				*read_tetri(int fd, char *tmp, char cur, t_list *list);
void				free_map(t_map *map);
void				print_map(t_map *map);
t_map				*new_map(int size);
int					place(t_etris *tetris, t_map *map, int x, int y);
void				set_piece(t_etris *tetris, t_map *map,
								t_point *point, char c);
t_map				*solve(t_list *list);
t_point				*point_new(int x, int y);
t_etris				*tetris_new(char **pos, int width, int height, char c);
void				free_tetris(t_etris *tetris);
t_list				*free_list(t_list *list);
int					ft_check_buff(char *buf);
void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstrev(t_list **alst);
size_t				ft_lstcount(t_list *lst);

#endif
