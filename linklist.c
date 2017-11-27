#define _CRT_SECURE_NO_WARNINGS
#include"list.h"

int node_count(LINK first, LINK head);
void print_backword(LINK first, LINK head, int num);
void print_middle(LINK first, LINK head, int num);
void print_forword(LINK first, LINK head, int num);
void del_odd_element(LINK first, LINK head, int num);

int main(void)
{
	int  user_num = 0, count = 0, num_node, odd = 0;
	LINK head = NULL;
	LINK cur;
	LINK first_node = NULL;
/*	while (scanf("%d", &user_num) != NULL)
	{
		cur = creat_node(user_num);
		if (count == 0)
			first_node = cur;
		head = append(head, cur);
		count++;
	}
While문 수정전  
*/
	while (1)
	{
		printf("input num : ");
		scanf("%d", &user_num);
		if (user_num == EOF)
		{
			break;
		}

		cur = creat_node(user_num);
		if (count == 0)
			first_node = cur;
		head = append(head, cur);
		count++;
		printf("\n");
	}

	num_node = node_count(first_node, head);
	printf("Number of node : %d\n", num_node);
	print_backword(first_node, head, num_node);
	print_middle(first_node, head, num_node);
	print_forword(first_node, head, num_node);

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
	print_forword(first_node, head, num_node);
	return 0;
}
