/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:33:46 by aabashee          #+#    #+#             */
/*   Updated: 2023/11/08 10:45:03 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

/* // Sample function to delete the content of a list node
void delete_content(void *content)
{
	free(content); // Assuming content was allocated with malloc
}

int main()
{
	// Create a sample linked list with three nodes
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	t_list *node3 = (t_list *)malloc(sizeof(t_list));

	char *content1 = strdup("Node 1 content");
	char *content2 = strdup("Node 2 content");
	char *content3 = strdup("Node 3 content");

	node1->content = content1;
	node2->content = content2;
	node3->content = content3;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	// Delete the second node using ft_lstdelone
	ft_lstdelone(node2, delete_content);

	// Output the remaining nodes and their content
	t_list *current = node1;
	while (current != NULL)
	{
		printf("Content: %s\n", (char *)(current->content));
		current = current->next;
	}

	// Don't forget to free the remaining nodes and their content
	ft_lstdelone(node1, delete_content);
	ft_lstdelone(node3, delete_content);

	return 0;
} */