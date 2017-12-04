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
		printf("input num(�����Ϸ��� ctrl+z�� ����� ������ �Է�) : ");
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
	printf("Number of node : %d(������ ����� ���� ���)\n\n", num_node);

	printf("Print Inputs Backward(�Է� ���� ���)\n");
	print_backward(first_node, Head, num_node);

	printf("Print Input on Middle Position(�߰� ��ġ�� �Է°� ���)\n");
	print_middle(first_node, Head, num_node);

	printf("Print Inputs Forward(�Է¼� ���)\n");
	print_forward(Head);

	printf("Print input left after deleting odd inputs(Ȧ�� ��° ��带 �Է��ڷḦ ���� �� ���� �ڷ� ���)\n");
	cur = del_odd_element(Head, num_node);
	print_forward(cur);

	return 0;
}
