# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 13:44:07 by oemelyan          #+#    #+#              #
#    Updated: 2023/06/17 13:44:11 by oemelyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strlcat.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_strdup.c \
				ft_strmapi.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_striteri.c \
				ft_putchar_fd.c \

OBJS		= $(SRCS:.c=.o)

# BONUS		=	ft_lstadd_back.c

BONUS_OBJS	= $(BONUS:.c=.o)

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re bonus

# ft_putstr_fd.c \
# ft_putendl_fd.c \
# ft_putnbr_fd.c \