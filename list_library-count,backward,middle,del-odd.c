#include "list.h"


void print_backward(LINK first, LINK head, int num)
{
	printf("Print Back : ");
	for (int i=0; i<num; i++)
	{
		head=first;
		for(int j=0; j<num-i-1; i++;)
		{
			head=head->next;
		}
		printf("%d",head-> value);
	}
}

void print_middle(LINK first, LINK head, int num)
{
	int prtnum=num/2;
	head=first;
	if(num%2==0)
	{
		for (int i=0;i<(prtnum-1);i++)
			head=head->next;
	}
	else
		for(int i=0; i<prtnum;i++)
			head=head->next;
	printf("\nMiddle :%d",head->value);
}
/*
void del_odd_element(LINK first, LINK head, int num)
{
	first=first->next;
	head=first;
}

int node_count(LINK first,LINK head)
{
	int count=0;
	head=first;
	while(head!=NULL)
	{
		count++;
		head=head->next;
	}

	return count;
}
*/

