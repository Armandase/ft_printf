NAME	= libftprintf.a
SRCS	= ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_base.c ft_print_addr.c ft_putstr.c 
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
