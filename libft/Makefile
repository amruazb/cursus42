CFLAGS = -Wall -Wextra -Werror

NAME = libft.a 
CC = cc
SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_realloc.c \
		ft_split.c \
		ft_splitswap.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

OBJS = $(SRCS:.c=.o)

GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m

BONUS_FUNCTIONS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
                 ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

BONUS_SRCS = $(addsuffix .c, $(BONUS_FUNCTIONS))
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo -e "$(GREEN)Library $@ built successfully!$(NC)"

all: $(NAME)

compile_c_to_o:
	$(CC) $(CFLAGS) -c source_file.c -o object_file.o


clean:
	@rm -f $(OBJS)
	@echo -e "$(RED)Cleaned object files$(NC)"

fclean: clean
	@find . -type f \( ! -name '*.c' -a ! -name '*.h' -a ! -name 'Makefile' \) -exec rm -f {} \;
	@rm -f $(NAME)
	@echo -e "$(RED)Removed library$(NC)"

version:
	@echo "MyLib Version 1.0"

bonus: $(BONUS_OBJS)
	@ar rcs $(NAME) $(BONUS_OBJS)
	@echo -e "$(GREEN)Bonus functions added to $(NAME)$(NC)"

re: fclean all


