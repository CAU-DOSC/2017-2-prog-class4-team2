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
		printf("input num(종료하려면 ctrl+z를 종료될 때까지 입력) : ");
		breakvar = scanf_s("%d", &user_num);

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
	printf("Number of node : %d(생성된 노드의 개수 출력)\n\n", num_node);

	printf("Print Inputs Backward(입력 역순 출력)\n");
	print_backward(first_node, head, num_node);

	printf("Print Input on Middle Position(중간 위치의 입력값 출력)\n");
	print_middle(first_node, head, num_node);

	printf("Print Inputs Forward(입력순 출력)\n");
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
	printf("Print input left after deleting odd inputs(홀수 번째 노드를 입력자료를 없앤 후 남은 자료 출력)\n");
	print_forward(first_node, head, num_node);

	return 0;
}
