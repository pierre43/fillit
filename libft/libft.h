/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/06 12:58:56 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/04 11:19:08 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

size_t				ft_strlen(const char *str);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_isalpha(int i);
int					ft_isdigit(int i);
int					ft_isalnum(int i);
int					ft_isascii(int i);
char				*ft_itoa(int n);
int					ft_isprint(int i);
void				*ft_memset(void *str, int c, size_t n);
char				*ft_strcat(char *dest, const char *src);
void				ft_bzero(void *str, size_t n);
int					ft_atoi(const char *str);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, char *src);
void				ft_strdel(char **as);
char				*ft_strdup(char *src);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *hay, char *need, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *str, const char *to_find);
int					ft_tolower(int i);
int					ft_toupper(int i);
char				*ft_strtrim(char const *s);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				**ft_strsplit(char const *s, char c);

#endif
