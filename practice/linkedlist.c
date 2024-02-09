#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node* next;
};

typedef struct node node_t;

void	printlist(node_t *head)
{
	node_t *tmp = head;

	while(tmp)
	{
		printf("%d - ", tmp->value);
		tmp = tmp->next;
	}
	printf("\n");
}

node_t *create_new_node(int value)
{
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return result;
}

int main()
{
	node_t *head = NULL;
	node_t *tmp;

	//create node in a loop;
	int i = 0;
	while( i < 25)
	{
		tmp = create_new_node(i);
		tmp->next = head;
		head = tmp;
		i++;

	}
	printlist(head);
}


/*
 *creat_node with function create_new_node;
 * node_t *head;
	node_t *tmp;

	tmp = create_new_node(45);
	head = tmp;
	tmp = create_new_node(35);
	tmp->next = head;
	head = tmp;
	tmp = create_new_node(25);
	tmp->next = head;
	head = tmp;

	printlist(head);
}


 *creating new node without any function
 * node_t *head;
	n1.value = 45;
	n2.value = 8;
	n3.value = 32;

	//link then
	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;

	node_t n4;
	n4.value = 13;
	n4.next = &n3;
	n2.next = &n4;
	printlist(head);
	return 0;
}*/



/*int main()
{
	int *values = malloc(40);
	values[2] = 45;
	int x = values[2];
	values = realloc(values, 20000*sizeof(int));
	x = values[600];
}*/



