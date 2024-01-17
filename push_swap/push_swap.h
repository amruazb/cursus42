/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:26:15 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/17 12:26:55 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	struct s_node	*next;
	struct s_node	*prev;
	int				data;
}	t_list;

//listfunctions
void	*create_stack(char **input);
void	create_node(t_list **head, int data);
void	add_at_begin(t_list	**tail, int data);
void	add_to_end(t_list **head, int data);
//listfunctions2
void	ft_init_list(t_list **list_a, t_list **init_list);
void	custom_init_list(t_list **init_list, int i);
//utils
int		is_dup(t_list *list, int data);
char	**ps_split(char *s);
int		is_zero(int p_ati, char *w);
int		ps_atoi(const char *l);
int		lst_size(t_list *list);
int		is_sorted(t_list *list);
//sorting functions
void	sort_list(t_list **list_b, t_list **init_list);
//sort functions until 34
void	sort_small_chunk(t_list **list_a, t_list **list_b, int len);
void	sort_2_num(t_list **list_a);
void	sort_3_num(t_list **list_a);
void	sort_3_num_cont(t_list **list_a);
void	sort_4_num(t_list **list_a, t_list **list_b);
void	sort_4_num_com_move(t_list **list_a, t_list **list_b);
void	sort_4_num_cont(t_list **list_a, t_list **list_b, int pos);
//sort functions until 134
void	sort_medium_chunk(t_list **list_a, t_list **list_b);
void	push_the_chunk(t_list **list_a, t_list **list_b, int min, int max);
void	sort_the_push_chunk(t_list **list_a, t_list **list_b);
//more
void	sort_more(t_list **list_a, t_list **list_b);
void	sort_more_cont(t_list **list_a, t_list **list_b, int i);
void	sort_large_chunk(t_list **list_a, t_list **list_b);
//sort_utils
int		find_min(t_list *list);
int		find_max(t_list *list);
int		find_position(t_list *list, int data);

//printingfunctions
void	ft_putstr(char *c);
void	print_list(t_list *a, t_list *tmpa, int len);
//freefunctions
int		arg_checker(char **av);
void	del_first_node(t_list **list);
void	ft_pexit(t_list *list_a, char **splits);
void	ft_exit(t_list *list_a);
void	ft_exit3(void);
void	free_list(t_list *list);
void	free_splits(char **splits);
void	ft_exit2(t_list *list_a, t_list *list_b, t_list *init_list);

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

#endif
