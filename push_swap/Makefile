CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3

SRC = a_push_swap.c b_ps_input.c c_create_node.c
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

