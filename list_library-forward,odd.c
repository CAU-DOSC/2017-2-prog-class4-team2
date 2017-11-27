#include "list.h"

int node_count(LINK head, LINK cur)
{
	int count = 0;
	cur = head;

	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

void print_forward(LINK head, LINK cur)
{
	printf("\nPrint Forward  : ");

	cur = head;

	while (cur)
	{
		printf("%d ", cur->value);
		cur = cur->next;
	}
}

void del_odd_element(LINK head, LINK cur)
{
	head = head->next;

	while (cur != "NULL" || cur->next != "NULL")
	{
		printf("%d ", cur->value);
		cur = cur->next;
	}
}