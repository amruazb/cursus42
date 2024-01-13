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


//utils
int		is_dup(t_list *list, int data);
char	**ps_split(char *s);
int		is_zero(int p_ati, char *w);
int		ps_atoi(const char *l);
int		is_sort(t_list *list);
int    lst_size(t_list *list);
int		is_sorted(t_list *list);


//printingfunctions
void ft_putstr(char *c);
void ft_putnbr(int n);
void	print_list(t_list *list);
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
