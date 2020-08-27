NAME	= do-op

SRCS	= ft_atoi.c op.c ft_putnbr.c main.c

OBJS	= ${SRCS:.c=.o}

CC		= @gcc

RM		= @rm -f

DEPS	= includes

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I ${DEPS} ft_atoi.c op.c ft_putnbr.c main.c

${NAME}:	${OBJS}
			@mv a.out do-op

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
