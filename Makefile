NAME	= libftprintf.a
SRCS	= ft_printf.c ft_putfchar.c ft_putfnbr.c ft_putfnbr_base.c ft_fprint_addr.c ft_putfstr.c 
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJS = ${SRCS:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar rc ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
