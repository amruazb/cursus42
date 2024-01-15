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


void		*create_stack(char **input);
//listfunctions
void	create_node(t_list **head, int data);
void	add_to_begin(t_list **tail, int data);
void	add_to_end(t_list **head, int data);

//listfunctions2
void	ft_init_list(t_list **list_a, t_list **init_list);
void	custom_init_list(t_list **init_list, int i);


//utils
int		is_dup(t_list *list, int data);
char	**ps_split(char *s);
int		is_zero(int p_ati, char *w);
int		ps_atoi(const char *l);
int    lst_size(t_list *list);
int		is_sorted(t_list *list);
//sorting functions
void	sort_list(t_list **list_b , t_list **init_list);

//sort functions until 34
void	sort_small_chunk(t_list **list_a, t_list **list_b, int len);
void	sort_2_num(t_list **list_a);
void	sort_3_num(t_list **list_a);
void	sort_3_num_cont(t_list **list_a);
void	sort_4_num(t_list **list_a, t_list **list_b);
void	sort_4_num_com_move(t_list **list_a, t_list **list_b);
void	sort_4_num_cont(t_list **list_a, t_list **list_b, int pos);
//more
void	sort_more(t_list **list_a, t_list **list_b);
void	sort_more_cont(t_list **list_a, t_list **list_b, int i);
void	sort_large_chunk(t_list **list_a, t_list **list_b);


//sort functions until 134
void	sort_medium_chunk(t_list **list_a, t_list **list_b);
void	push_the_chunk(t_list **list_a, t_list **list_b, int min, int max);
void	sort_the_push_chunk(t_list **list_a, t_list **list_b);



//sort_utils
int		find_min(t_list *list);
int		find_max(t_list *list);
int		find_position(t_list *list, int data);


//printingfunctions
void	ft_putstr(char *c);
void	print_list(t_list *a, t_list *tmpa, int len);
//freefunctions
void    del_node(t_list **list);
void	ft_pexit(t_list *list_a, char **splits);
void	ft_exit(t_list *list_a);
void	free_list(t_list *list);
void	free_splits(char **splits);
//moves
void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ss(t_list **list_a, t_list **list_b);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra(t_list **list_a);
void	rb(t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a);
void	rrb(t_list **list_b);
void	rrr(t_list **list_a, t_list **list_b);

#endif
