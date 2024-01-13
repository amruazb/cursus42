#include "push_swap.h"

int is_sorted(t_list *list)
{
    t_list *current = list;

    while (current->next != list) {
        if (current->data > current->next->data) {
            return 0; // Not sorted
        }
        current = current->next;
    }

    return 1; // Sorted
}