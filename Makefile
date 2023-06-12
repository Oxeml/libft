.PHONY:				all clean fclean re

SRCS			=	ft_isalpha ft_isalnum.c ft_isdigit ft_isascii ft_isprint/
				ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove

OBJS				= $(SRCS:.c = o)

CC				= gcc

RM				= rm -f

CFLAGS				= -Wall -Wextra -Werror

NAME				=libft.a

all:				$(NAME)

$ NAME:				$(OBJS)
				ar rcs $(NAME) $(OBJS)
clean:
				$ (RM) $(NAME)

re:				fclean $(NAME)

fclean:				clean
				$(RM) $(NAME)


