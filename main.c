#include <stdio.h>

double T_bw(char*,int,int);
double T_rev(char*,int,int);
double T_triv(char*,int,int);
double T_jugg(char*,int,int);

int main()
{
	int n=0;
	int d=0;

	printf("Enter the number of size of string :");
	scanf("%d",&n);

	char*str=(char*)malloc(sizeof(char)*n);
	gets(str);

	printf("Trivial    : %s",T_triv(str,d,n));
        printf("Juggling   : %s",T_jugg(str,d,n));
	printf("Block-swap : %s",T_bw(str,d,n));
	printf("Reverse    : %s",T_rev(str,d,n));

	return 0;
}
			


