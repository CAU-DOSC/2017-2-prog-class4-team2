#define _CRT_SECURE_NO_WARNINGS
#include"list.h"

LINK create_node(int value);
LINK append(LINK head, LINK cur);
int node_count(LINK first, LINK head);
void print_backward(LINK first, LINK head, int num);
void print_middle(LINK first, LINK head, int num);
void print_forward(LINK first, LINK head);
void del_odd_element(LINK first, LINK head);

int main(void)
{
	int  user_num = 0, count = 0, num_node, odd = 0, breakvar;
	LINK head = NULL;
	LINK cur;
	LINK first_node = NULL;
	while (1)
	{
		printf("input num : ");
		breakvar=scanf_s("%d", &user_num);
		if (breakvar == EOF)
		{
			break;
		}

		cur = create_node(user_num);
		if (count == 0)
			first_node = cur;
		head = append(head, cur);
		count++;
		printf("\n");
	}

	num_node = node_count(first_node, head);
	printf("Number of node : %d\n", num_node);

	printf("Print NodeValue Backward\n");
	print_backward(first_node, head, num_node);
	
	printf("Print MiddleNodeValue\n");
	print_middle(first_node, head, num_node);
	
	printf("Print NodeValue Forward\n");
	print_forward(first_node, head, num_node);

	first_node = first_node->next;
	head = first_node;

	if (num_node % 2 == 0)
		odd = num_node / 2 - 1;
	
	else
		odd = num_node / 2;
	
	for (int i = 0; i < odd; i++)
	{
		head->next = head->next->next;
		head = head->next;
	}
	
	num_node = node_count(first_node, head);
	printf("Print NodeValue left\n");
	print_forward(first_node, head, num_node);
	
	return 0;
}
