#define _CRT_SECURE_NO_WARNINGS
#define LENGTH 10

#include <stdio.h>
#include <time.h>

T_rev(char * string, int d, int n)
{
	char temp;
	clock_t start, end;

	start = clock();

	while (d <= 0)
		d = d + n;

	if (d > n)
		d = d%n;

	for (int i = 0; i < d/2; i++)
	{
		temp = string[i];
		string[i] = string[d - i - 1];
		string[d - i - 1] = temp;
	}

	for (int i = d; i < (d+n) / 2; i++)
	{
		temp = string[i];
		string[i] = string[n - (i - d) - 1];
		string[n - (i - d) - 1] = temp;
	}

	for (int i = 0; i < n/2; i++)
	{
		temp = string[i];
		string[i] = string[n - i - 1];
		string[n - i - 1] = temp;
	}
	
	end = clock();

	return ((double)(end - start) / (CLOCKS_PER_SEC));
}