#include <stdio.h>

double T_bw(char*,int,int);
double T_rev(char*,int);
double T_triv(char*,int,int);
double T_jugg(char*,int,int);

int main()
{
	int n=0;
	int d=0;

	printf("Enter the  number to do work(d) and number of size of string(n) :");
	scanf("%d %d",&d,&n);
	
<<<<<<< HEAD
=======
	printf("Enter the string :");
>>>>>>> e56e6486642ab5791f02bcaefdf8d8dc801b7542
	char*str=(char*)malloc(sizeof(char)*n);
	scanf("%s",str);

	printf("STR Length\tROTATE Distance\tT.trivial\tT.juggle\tT.bw\tT.reverse\n");
	printf("%d\t%d\t%lf\t%lf\t%lf\t%lf", n,d,T_triv(str, d, n), T_jugg(str, d, n), T_bw(str, d, n), T_rev(str, n));

	return 0;
}
			


