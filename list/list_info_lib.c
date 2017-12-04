#include "list.h"

int node_count(LINK head)
{
	int count = 0;
	LINK cur = head;

	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}