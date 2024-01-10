CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address
SRC_DIR = .
OBJ_DIR = obj
INCLUDES = -I.

SRCS = ps_main.c ps_sort.c create_list.c ps_minmax.c ps_split.c free_error.c \
       ps_moves.c ps_moves2.c ps_createstack.c ps_print.c ps_atoi.c ps_sort2.c \
	   create_list2.c
OBJS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS))

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
