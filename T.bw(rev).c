#define _CRT_SECURE_NO_WARNINGS
#define LENGTH 10

#include <stdio.h>
#include <time.h>
 
double T_bw(char *, int, int);

int main(void)
{
	char string[LENGTH + 1];
	int d;

	scanf("%s", string);
	scanf("%d", &d);

	printf("%.100lf\n", T_bw(string, d, LENGTH));
	printf("%s\n", string);
}

double T_bw(char * string, int d, int length)
{
// d is displacement of the characters before and after change  

	clock_t start, end;
	double time;

	start = clock();

	char temp;

	if (d == length)
		return 0;
	else if(d > length)
		d = d%length;

	// when d >= length, reduce d until d < length  

	if (d < length - d)
	{
		for (int i = 0; i < d; i++)
		{
			temp = *(string + i);
			*(string + i) = *(string + length - d + i);
			*(string + length - d + i) = temp;
		}
		printf("%s\n", string);
	
		end = clock();
		time = ((double)end - (double)start)/CLOCKS_PER_SEC;
		
			return (time + T_bw(string, d, length - d));
		}
	else if (d == length - d)
		{
		for (int i = 0; i < d; i++)
		{
			temp = *(string + i);
			*(string + i) = *(string + length - d + i);
			*(string + length - d + i) = temp;
		}
		printf("%s\n", string);
		
		end = clock();
		time = ((double)end - (double)start) / CLOCKS_PER_SEC;
		
		return time;
	}
	else
	{
		for (int i = 0; i < length - d; i++)
		{
			temp = *(string + i);
			*(string + i) = *(string + i + d);
			*(string + i + d) = temp;
		}
		printf("%s\n", string);
		
		end = clock();
		time = ((double)end - (double)start) / CLOCKS_PER_SEC;
		
		return (time + T_bw(string + length - d, 2 * d - length, d));
	}
}
