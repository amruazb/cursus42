#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>


typedef struct s_list
{
	struct s_list* prev;
	int	data;
	struct s_list* next;
}	t_list;

t_list	*create_node(int data);
int		create_stack(char **input, t_list **list_a);
void	add_to_list(t_list **list_a, int data);
char	**ps_split(char *s);
int		is_zero(int p_ati, char *w);
int		ps_atoi(const char *l);


#endif
