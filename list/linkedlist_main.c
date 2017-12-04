#define _CRT_SECURE_NO_WARNINGS
#include"list.h"

LINK create_node(int value);
LINK append(LINK head, LINK cur);
int node_count(LINK head);
void print_backward(LINK first, LINK head, int num);
void print_middle(LINK first, LINK head, int num);
void print_forward(LINK head);
LINK del_odd_element(LINK head, int num_node);

int main(void)
{
	int  user_num = 0, count = 0, num_node, odd = 0, breakvar;
	LINK Head = NULL;
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

		Head = append(Head, cur);

		count++;
		printf("\n");
	}

	num_node = node_count(Head);
	printf("Number of node : %d(생성된 노드의 개수 출력)\n\n", num_node);

	printf("Print Inputs Backward(입력 역순 출력)\n");
	print_backward(first_node, Head, num_node);

	printf("Print Input on Middle Position(중간 위치의 입력값 출력)\n");
	print_middle(first_node, Head, num_node);

	printf("Print Inputs Forward(입력순 출력)\n");
	print_forward(Head);

	printf("Print input left after deleting odd inputs(홀수 번째 노드를 입력자료를 없앤 후 남은 자료 출력)\n");
	cur = del_odd_element(Head, num_node);
	print_forward(cur);

	return 0;
}
