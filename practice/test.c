//push_swap.h
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
void		sort_three(t_list **stack_a);
void		sort_five(t_list **stack_a, t_list **stack_b);
void		sort_stack(t_list **stack_a, t_list **stack_b);
void		pancake_sort(t_list **stack_a, t_list **stack_b);



#endif
#include "push_swap.h"

void	save_split(char **s, char **current, int j)
{
	while (*(*s) != ' ' && *(*s))
		*((*current) + j++) = *(*s)++;
	while (*(*s) == ' ')
		*s += 1;
	*((*current) + j) = '\0';
}

char	**ps_split(char *s)
{
	int		j;
	int		k;
	char	**split;
	char	*current;

	k = 0;
	split = malloc(sizeof(char *) * 4096);
	if (!split)
		return (NULL);
	while (*s == ' ')
		s += 1;
	while (*s)
	{
		j = 0;
		split[k] = malloc(sizeof(*s + 1));
		if (!split[k])
			return (NULL);
		current = split[k++];
		save_split(&s, &current, j);
	}
	split[k] = NULL;
	return (split);
}
//ps_print.c
#include "push_swap.h"

void	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(args, const char *));
			else if (*format == 'd')
				ft_putnbr(va_arg(args, int));
			else if (*format == '%')
				ft_putchar('%');
			else
				ft_putchar(*format);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

void	ft_putstr(const char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_printlist(t_list *stack)
{
	if (!stack)
		return ;
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}
//ps_moves2.c
#include "push_swap.h"

/**
 * Shift up all elements of stack a by 1
 * The first element becomes the last one.
 * stack a.
 * */

void	ra(t_list **stack_a)
{
	(*stack_a) = (*stack_a)->next;
	ft_printf("ra\n");
}

/**
 * Shift up all elements of stack b by 1.
 * The first element becomes the last one.
 * stack b.
 * */

void	rb(t_list **stack_b)
{
	(*stack_b) = (*stack_b)->next;
	ft_printf("rb\n");
}
/**
 * ra and rb at the same time.
 * stack_a 
 * stack_b
 * */

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}

/**
 * Shift down all elements of stack a by 1.
 * The last element becomes the first one
 * Stack_a.
 * */

void	rra(t_list **stack_a)
{
	(*stack_a) = (*stack_a)->prev;
	ft_printf("rra\n");
}

/**
 * Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 * */

void	rrb(t_list **stack_b)
{
	(*stack_b) = (*stack_b)->prev;
	ft_printf("rrb\n");
}
#include "push_swap.h"

/*
 * Swap the first 2 elements at the top of the stack a.
 * */
void	sa(t_list **stack_a)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if(!tmp)
			return ;
	tmp->content = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = tmp->content;
	free(tmp);
	ft_printf("sa\n");
}

/*
 * Swap the first 2 elements at the top of stack b.
 * */
void	sb(t_list **stack_b)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if(!tmp)
		return ;
	tmp->content = (*stack_b)->content;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->next->content = tmp->content;
	free(tmp);
	ft_printf("sb\n");
}

/*
 * sa and sb at the same time.
 **/
void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}

/**
 * Take the first element at the top of b and put it at the top of a
 * */
void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!(*stack_b) || !tmp)
		return ;
	tmp->content = (*stack_b)->content;
	if (!(*stack_a))
		ft_lstnew(tmp->content);
	else
		ft_lstadd_front(&(*stack_a), tmp);
	ft_del_top(&(*stack_b));
	free(tmp);
	ft_printf("pa\n");
}

/**
 * Take the first element at the top of a , and put it at the top of b.
 * */
void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!(*stack_a) || !tmp)
		return ;
	tmp->content = (*stack_a)->content;
	if (!(*stack_b))
		*stack_b = ft_lstnew(tmp->content);
	else
		ft_lstadd_front(stack_b, tmp);
	ft_del_top(stack_a);
	free(tmp);
	ft_printf("pb\n", 3);
}
#include "push_swap.h"

int	find_min(t_list *stack)
{
	int	min;

	min = stack->content;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}

int	find_max(t_list *stack)
{
	int	max;

	max = stack->content;
	while (stack)
	{
		if (stack->content > max)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}
//ps_main.c
#include "push_swap.h"
#include <unistd.h>

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		stack_a = ps_create_stack(av);
		if (!stack_a)
			print_error();
		ft_printlist(stack_a);
		pancake_sort(&stack_a, &stack_b);
		// sort_stack(&stack_a, &stack_b);
		ft_printf("Sorted Stack:\n");
		ft_printlist(stack_a);
	 }
	return (0);
}
//ps_createstack.c
#include "push_swap.h"

int	check_digit(int number, char *str)
{
	if (number == 0)
	{
		while (*str)
		{
			if ((*str == '-' || *str == '+') && (*(str + 1)
					&& *(str + 1) >= '0' && *(str + 1) <= '9'))
				str++;
			while (*str == '0')
				str++;
			if (*str)
				return (0);
		}
		return (1);
	}
	return (1);
}

int	check_dup(int digit, t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (temp)
	{
		if (temp->content == digit)
			return (1);
		temp = temp->next;
	}
	return (0);
}

t_list	*ps_create_stack(char **user_data)
{
	t_list	*stack;
	t_list	*node;
	char	**tmp;
	int		digit;
	int		i;

	stack = NULL;
	while (*(++user_data))
	{
		tmp = ps_split(*user_data);
		if (!tmp)
			free_exit(stack, tmp);
		i = -1;
		while (tmp[++i])
		{
			digit = ps_atoi(tmp[i]);
			if (!(check_digit(digit, tmp[i])) || check_dup(digit, stack))
				free_exit(stack, tmp);
			node = ft_lstnew(digit);
			ft_lstadd_back(&stack, node);
		}
		free_array(tmp);
	}
	return (stack);
} //

#include "push_swap.h"

void sort_2_num(t_list **stack_a)
{
    // Modify the code to work with t_list instead of t_node
    if ((*stack_a)->content > (*stack_a)->next->content)
        sa(stack_a);
}

void sort_3_num_cont(t_list **stack_a)
{
    // Modify the code to work with t_list instead of t_node
    if ((*stack_a)->content < (*stack_a)->next->content)
    {
        if ((*stack_a)->content < (*stack_a)->prev->content && (*stack_a)->next->content > (*stack_a)->prev->content)
        {
            sa(stack_a);
            ra(stack_a);
        }
        if ((*stack_a)->content > (*stack_a)->prev->content && (*stack_a)->next->content > (*stack_a)->prev->content)
            rra(stack_a);
    }
}

void sort_3_num(t_list **stack_a)
{
    // Modify the code to work with t_list instead of t_node
    if ((*stack_a)->content > (*stack_a)->next->content)
    {
        if ((*stack_a)->content < (*stack_a)->prev->content && (*stack_a)->next->content < (*stack_a)->prev->content)
            sa(stack_a);
        if ((*stack_a)->content > (*stack_a)->prev->content && (*stack_a)->next->content > (*stack_a)->prev->content)
        {
            sa(stack_a);
            rra(stack_a);
        }
        if ((*stack_a)->content > (*stack_a)->prev->content && (*stack_a)->next->content < (*stack_a)->prev->content)
            ra(stack_a);
    }
    sort_3_num_cont(stack_a);
}

void sort_4_num_com_move(t_list **stack_a, t_list **stack_b)
{
    // Modify the code to work with t_list instead of t_node
    pb(stack_a, stack_b);
    sort_3_num(stack_a);
    pa(stack_a, stack_b);
}

void sort_4_num_cont(t_list **stack_a, t_list **stack_b, int pos)
{
    // Modify the code to work with t_list instead of t_node
    if (pos == 3)
    {
        rra(stack_a);
        rra(stack_a);
        sort_4_num_com_move(stack_a, stack_b);
    }
    if (pos == 4)
    {
        rra(stack_a);
        if (ft_lstsize(*stack_a) == 1)
            return;
        sort_4_num_com_move(stack_a, stack_b);
    }
}

void sort_4_num(t_list **stack_a, t_list **stack_b)
{
    // Modify the code to work with t_list instead of t_node
    int min = find_min(*stack_a);
    int pos = find_pos(*stack_a, min);
    if (pos == 1)
    {
        sort_4_num_com_move(stack_a, stack_b);
    }
    if (pos == 2)
    {
        sa(stack_a);
        if (ft_lstsize(*stack_a) == 1)
            return;
        sort_4_num_com_move(stack_a, stack_b);
    }
    sort_4_num_cont(stack_a, stack_b, pos);
}

void sort_more_cont(t_list **stack_a, t_list **stack_b, int i)
{
    // Modify the code to work with t_list instead of t_node
    while (i)
    {
        pa(stack_a, stack_b);
        i--;
    }
}

void sort_more(t_list **stack_a, t_list **stack_b)
{
    // Modify the code to work with t_list instead of t_node
    int i[5];
    i[0] = 0;
    i[1] = ft_lstsize(*stack_a);
    i[3] = find_min(*stack_a);
    i[4] = find_pos(*stack_a, i[3]);
    while (1)
    {
        i[2] = ft_lstsize(*stack_a);
        if (i[2] == 4)
            break;
        i[3] = find_min(*stack_a);
        if ((*stack_a)->content == i[3])
        {
            pb(stack_a, stack_b);
            i[0]++;
        }
        else if (i[4] < i[1] / 2)
            ra(stack_a);
        else
            rra(stack_a);
    }
    sort_4_num(stack_a, stack_b);
    sort_more_cont(stack_a, stack_b, i[0]);
}

