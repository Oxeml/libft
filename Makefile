# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 13:23:49 by oemelyan          #+#    #+#              #
#    Updated: 2023/06/13 22:57:47 by oemelyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_bzero.c ft_calloc.c ft_isascii.c ft_isalpha.c ft_isalnum.c  ft_isdigit.c ft_itoa.c \
		ft_isprint.c ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_strdup.c ft_strlcpy.c ft_strlcat.c \
		ft_strlen.c ft_strchr.c ft_strjoin.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_toupper.c ft_tolower.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all	clean fclean re
