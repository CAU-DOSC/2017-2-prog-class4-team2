#define _CRT_SECURE_NO_WARNINGS
#define LENGTH 11

#include <stdio.h>
#include <time.h>
#include <string.h>

double T_bw(char *, int, int);

int main(void)
{
	char string[LENGTH];
	int d;

	scanf("%s", string);
	scanf("%d", &d);

	printf("%lf", T_bw(string, d, LENGTH - 1));
}

double T_bw(char * inputstr, int d, int n)
{
	// d is displacement of the characters before and after change

	clock_t start, end;
	double time;

	start = clock();
	int i;
	char temp;

	while (d >= n)
		d--;
	// when d >= n, reduce d until d < n

	if (d < (n - d))
	{
		char * A = (char*)malloc(sizeof(char)*(d + 1));
		strncpy(A, inputstr, d);
		A[d] = '\0';
		printf("A: %s\n", A);
	
		char * B = (char *)malloc(sizeof(char)*(n-2*d+1));
		strncpy(B, inputstr+d, (n-2*d));
		B[n-2*d] = '\0';
		printf("B: %s\n", B);
		printf("%s\n", inputstr);
		
		char * Br = (char *)malloc(sizeof(char)*(d+1));
		strcpy(Br, inputstr + (n-d));
		printf("Br: %s\n", Br);
		printf("%s\n", inputstr);
		
		strcat(Br, B);
		strcat(Br, A);
		printf("%s", Br);

		end = clock();
		time = (double)(end - start);

		return (time + T_bw(inputstr, d, n - d));
	}
	else if (d == (n - d))
	{
		
		printf("%s\n", inputstr);

		end = clock();
		time = end - start;

		return time;
	}
	else
	{
		
		printf("%s\n", inputstr);

		end = clock();
		time = end - start;

		return (time + T_bw(inputstr + n - d, d, d));
	}
}
