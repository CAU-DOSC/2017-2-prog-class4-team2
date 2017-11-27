#pragma once
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *next;
};

typedef struct node Node;
typedef Node* LINK;


