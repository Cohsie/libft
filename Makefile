# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-tor <jose-tor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 18:23:45 by jose-tor          #+#    #+#              #
#    Updated: 2024/08/07 14:20:35 by jose-tor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = $(shell which cc clang gcc | head -n 1)
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_putchar_fd \
		ft_calloc \
		ft_strdup \
		ft_substr\
		ft_strjoin \
		ft_strtrim \
		ft_itoa \
		ft_split \
		ft_strmapi \
		ft_striteri \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \


SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
#OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))


OBJ = $(SRCS:%.c=%.o)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)


all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

rebonus: fclean

.PHONY: all clean fclean re