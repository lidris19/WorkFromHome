SRCS		=	srcs/ft_print.c \
				srcs/ft_print2.c \
				srcs/line_validity.c \
				srcs/parse_dict.c \
				srcs/utils.c \
				srcs/utils2.c \
				srcs/dict_utils.c \
				srcs/main.c


OBJS		=	${SRCS:.c=.o}

NAME		=	rush-02

CFLAGS		=	-Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			gcc ${CFLAGS} $^ -o $@

%.o: %.c
			gcc ${CFLAGS} -I./includes -c $< -o $@

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
