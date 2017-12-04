#include <stdio.h>

char* T_bw(char*,int,int);
char* T_rev(char*,int);
char* T_triv(char*,int,int);
char* T_jugg(char*,int,int);

int main()
{
	int n=0;
	int d=0;

	printf("Enter the  number to do work(d) and number of size of string(n) :");
	scanf("%d %d",&d,&n);
	

	char*str=(char*)malloc(sizeof(char)*n);
	gets(str);

	printf("Trivial    : %s",T_triv(str,d,n));
        printf("Juggling   : %s",T_jugg(str,d,n));
	printf("Block-swap : %s",T_bw(str,d,n));
	printf("Reverse    : %s",T_rev(str,n));

	return 0;
}
			


