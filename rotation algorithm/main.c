#include <stdio.h>

double T_bw(char*, int, int);
double T_rev(char*, int);
double T_triv(char*, int, int);
double T_jugg(char*, int, int);

int main()
{
	int n = 0;
	int d = 0;

	printf("Enter the number to do work(d) and number of size of string(n) :");
	scanf("%d %d", &d, &n);

	char *str = (char*)malloc(sizeof(char)*(n + 1));
	gets(str);

	printf("Trivial    : %lf", T_triv(str, d, n));
	printf("Juggling   : %lf", T_jugg(str, d, n));
	printf("Block-swap : %lf", T_bw(str, d, n));
	printf("Reverse    : %lf", T_rev(str, n));

	return 0;
}

