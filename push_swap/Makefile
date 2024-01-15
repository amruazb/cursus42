CC = gcc
CFLAGS = -Wall -Wextra -Werror 

SRC = c_list_create_utils.c d_sort_utils.c g_moves2.c s_a_sort_ft.c sm_a_sort_medium.c \
	a_ps_input.c e_errorhandle.c push_swap.c s_b_sort_small.c sn_a_sort_large.c \
	b_create_stack.c d_indexlist.c f_moves1.c s_c_sort_small2.c

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

