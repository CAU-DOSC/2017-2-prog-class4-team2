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