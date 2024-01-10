/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:15:56 by aabashee          #+#    #+#             */
/*   Updated: 2024/01/09 21:19:27 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

int			find_min(t_list *stack);
int			find_max(t_list *stack);
size_t		ft_strlen(const char *s);
t_list		*ps_create_stack(char **list_of_numbers);
int			ps_atoi(const char *str);
void		freelist(t_list *list);
void		print_error(void);
char		**ps_split(char *s);
void		free_exit(t_list *stack, char **str);
t_list		*ft_lstnew(int content);
t_list		*ft_lstlast(t_list *lst);
void		clear_stack(t_list **stack);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_del_top(t_list **list);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
void		free_array(char **str);
void		ft_putchar(char c);
void		ft_putstr(const char *s);
void		ft_putnbr(int num);
void		ft_printf(const char *format, ...);
void		ft_printlist(t_list *stack);
void		sa(t_list **stack_a);
void		sb(t_list **stack_b);
void		ss(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_a, t_list **stack_b);
void		pb(t_list **stack_a, t_list **stack_b);
void		ra(t_list **stack_a);
void		rb(t_list **stack_b);
void		rr(t_list **stack_a, t_list **stack_b);
void		rra(t_list **stack_a);
void		rrb(t_list **stack_b);
void		rrr(t_list **stack_a, t_list **stack_b);
int			find_pos(t_list *stack, int num);
void		sort_2_num(t_list **stack_a);
void 		sort_3_num_cont(t_list **stack_a);
void 		sort_3_num(t_list **stack_a);
void 		sort_4_num_com_move(t_list **stack_a, t_list **stack_b);
void 		sort_4_num_cont(t_list **stack_a, t_list **stack_b, int pos);
void 		sort_4_num(t_list **stack_a, t_list **stack_b);
void 		sort_more_cont(t_list **stack_a, t_list **stack_b, int i);
void 		sort_more(t_list **stack_a, t_list **stack_b);
int			is_sorted(t_list *stack);



#endif
