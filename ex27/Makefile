NAME		=	ft_display_file

CC			=	cc
FLAGS		=	-Wall -Werror -Wextra
CFLAGS		=	-c
OFLAGS		=	-o
RM			=	rm -f

SRC			=	ft_display_file.c
OBJ			=	$(patsubst %.c, %.o, $(SRC))


all: $(NAME)
	
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OFLAGS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) $(CFLAGS) $< $(OFLAGS) $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all