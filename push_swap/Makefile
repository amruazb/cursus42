CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

SRC = a_push_swap.c b_ps_input.c c_create_node.c d_list.c \
		 e_exit.c f_moves1.c g_moves2.c h_moves3.c 
OBJ = $(SRC:.c=.o)

TARGET = push_swap

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

