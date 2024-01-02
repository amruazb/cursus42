#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/inc/libft.h"
# include "../ft_printfnew/inc/ft_printf.h"

typedef struct s_stack_data
{
	int		num;
	int		index;
	int		push_count;
	bool	median;
	bool	lowest;
	struct s_stack_data *main_node;
	struct s_stack_data *next;
	struct s_stack_data *prev;
}	t_stack_data;


#endif

