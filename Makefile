# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/06/28 12:12:51 by pichanal     #+#   ##    ##    #+#        #
#    Updated: 2019/06/28 12:12:55 by pichanal    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	= fillit

CC	= gcc

RM	= rm -f

SRCS	= ./libft/ft_atoi.c \
	  ./libft/ft_bzero.c \
	  ./libft/ft_isalnum.c \
	  ./libft/ft_isalpha.c \
	  ./libft/ft_isascii.c \
	  ./libft/ft_isdigit.c \
	  ./libft/ft_isprint.c \
	  ./libft/ft_itoa.c \
	  ./libft/ft_memalloc.c \
	  ./libft/ft_memccpy.c \
	  ./libft/ft_memchr.c \
	  ./libft/ft_memcmp.c \
	  ./libft/ft_memcpy.c \
	  ./libft/ft_memdel.c \
	  ./libft/ft_memmove.c \
	  ./libft/ft_memset.c \
	  ./libft/ft_putchar.c \
	  ./libft/ft_putchar_fd.c \
	  ./libft/ft_putendl.c \
	  ./libft/ft_putendl_fd.c \
	  ./libft/ft_putnbr.c \
	  ./libft/ft_putnbr_fd.c \
	  ./libft/ft_putstr.c \
	  ./libft/ft_putstr_fd.c \
	  ./libft/ft_strcat.c \
	  ./libft/ft_strchr.c \
	  ./libft/ft_strclr.c \
	  ./libft/ft_strcmp.c \
	  ./libft/ft_strcpy.c \
	  ./libft/ft_strdel.c \
	  ./libft/ft_strdup.c \
	  ./libft/ft_strequ.c \
	  ./libft/ft_striter.c \
	  ./libft/ft_striteri.c \
	  ./libft/ft_strjoin.c \
	  ./libft/ft_strlcat.c \
	  ./libft/ft_strlen.c \
	  ./libft/ft_strmap.c \
	  ./libft/ft_strmapi.c \
	  ./libft/ft_strncat.c \
	  ./libft/ft_strncmp.c \
	  ./libft/ft_strncpy.c \
	  ./libft/ft_strnequ.c \
	  ./libft/ft_strnew.c \
	  ./libft/ft_strnstr.c \
	  ./libft/ft_strrchr.c \
	  ./libft/ft_strsplit.c \
	  ./libft/ft_strstr.c \
	  ./libft/ft_strsub.c \
	  ./libft/ft_strtrim.c \
	  ./libft/ft_tolower.c \
	  ./libft/ft_toupper.c \
	  ./srcs/main.c \
	  ./srcs/map.c \
	  ./srcs/outils_liste.c \
	  ./srcs/reader.c \
	  ./srcs/solver.c \
	  ./srcs/tetrimino.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -g
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
