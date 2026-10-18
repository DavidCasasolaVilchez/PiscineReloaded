CC		= cc
CFLAGS	= -Wall -Wextra -Werror
SRC		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
RTSRC	= srcs/
HEADER	= includes/
NAME	= libft.a
SRCS	= ${addprefix ${RTSRC}, ${SRC}}
OBJS	= ${SRCS:.c=.o}
AR		= ar
ARFLAGS	= rcs
RM		= rm -f

all: ${NAME}

srcs/%.o: srcs/%.c
	${CC} ${CFLAGS} -c -I ${HEADER} $< -o $@

${NAME}: ${OBJS}
	${AR} ${ARFLAGS} ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all