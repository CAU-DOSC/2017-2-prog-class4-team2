#include "list.h"

void print_backward(LINK first, LINK head, int num)
{
	for (int i = 0; i<num; i++)
	{
		head = first;
		for (int j = 0; j<num - i - 1; i++)
		{
			head = head->next;
		}
		printf("%d ", head->value);
	}
}

void print_middle(LINK first, LINK head, int num)
{
	int prtnum = num / 2;
	head = first;
	if (num % 2 == 0)
	{
		for (int i = 0; i<(prtnum - 1); i++)
			head = head->next;
	}
	else
		for (int i = 0; i<prtnum; i++)
			head = head->next;
	printf("%d", head->value);
}

void print_forward(LINK head, LINK cur)
{
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

	while (cur != NULL || cur->next != NULL)
	{
		printf("%d ", cur->value);
		cur = cur->next;
	}
}