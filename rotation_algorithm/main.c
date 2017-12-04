#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

char * T_trivial(char * inputstr, int d, int n);
char * T_juggle(char * inputstr, int d, int n);
char * T_bw(char *inputstr, int d, int n);

int main(void)
{
	int n, d;
	scanf("%s", &n);
	scanf("%d", &d);

	char* inputstr = (char*)malloc(sizeof(char)*n) ;

	scanf("%s", inputstr);

	printf("T_trivial : %s", T_trivial(inputstr, d, n));

	printf("T_juggle : %s", T_juggle(inputstr, d, n));

	printf("T_bw : %s", T_bw(inputstr, d, n));

	printf("T_reverse%s", T_reverse(inputstr, d, n));

	return 0;
}