#include "push_swap.h"

int is_sorted(t_list *list)
{
    t_list *current = list;

    while (current->next) 
	{
        if (current->data > current->next->data) 
		{
            return 0; // Not sorted
        }
        current = current->next;
		if (current == list)
			break;
    }
    return 1; // Sorted
}
int is_zero(int p_ati, char *w)
{
	int z;
	z = 0;
	if (p_ati == 0)
	{
		while (w[z])
		{
			if ((w[z] == '-' || w[z] == '+') && (w[z + 1] && w[z + 1] >= '0' && w[z + 1] <= '9'))
				z++;
			while (w[z] == '0')
				z++;
			if (w[z])
				return (1);
		}
		return (0);
	}
	return (0);
}
int is_dup(t_list *list, int data)
{
	t_list *tmp;
	tmp = list;
	while (tmp)
	{
		if (tmp->data == data)
			return (1);
		tmp = tmp->next;
		if (tmp == list)
			break ;
	}
	return (0);
}
