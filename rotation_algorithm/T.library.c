#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char * T_trivial(char * inputstr, int d, int n)
{
	int temp;
	if (d > 0)
	{
		for (int i = 0; i < d; i++)
		{
			temp = inputstr[0];
			
			for (int j = 0; j < n - 1; j++)
			{
				inputstr[j] = inputstr[j + 1];
			}
			
			inputstr[n - 1] = temp;
		}
	}

	else if (d < 0)
	{
		d *= -1;

		for (int i = 0; i < d; i++)
		{
			temp = inputstr[n - 1];
			
			for (int j = n - 1; j >= 1; j++)
			{
				inputstr[j] = inputstr[j - 1];
			}

			inputstr[0] = temp;
		}
	}

	return inputstr;
}

char * T_juggle(char * inputstr, int d, int n)
{
	int i, j;
	if (d > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i - (d%n) > 0)
			{

			}
		}
	}

	return inputstr;
}

char * T_bw(char *inputstr, int d, int n)
{
	if (d > 0)
	{
		char * A = (char*)malloc(sizeof(char)*(d + 1));
		strncpy(A, inputstr, d);
		A[d] = '\0';
		printf("A: %s\n", A);

		char * B = (char *)malloc(sizeof(char)*(n + 1));
		strcpy(B, inputstr + (d));
		printf("B: %s\n", B);

		strcat(B, A);
		printf("%s", B);
	}
}

char * T_reverse(char *inputstr, int d, int n)
{
	char * A = (char*)malloc(sizeof(char)*(d + 1));
	strncpy(A, inputstr, d);
	A[d] = '\0';
	printf("A: %s\n", A);

	char * B = (char *)malloc(sizeof(char)*(n + 1));
	strcpy(B, inputstr + (d));
	printf("B: %s\n", B);

	A = _strrev(A);
	B = _strrev(B);
	
	strcat(B, A);
	
	B = _strrev(B);
	
	return B;
}