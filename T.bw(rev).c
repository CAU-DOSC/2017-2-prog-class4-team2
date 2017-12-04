#define _CRT_SECURE_NO_WARNINGS
#define LENGTH 10

#include <stdio.h>
#include <time.h>

double T_bw(char * string, int d, int length)
{
	// d is displacement of the characters before and after change  

	time_t start, end = 0;
	float time;

	start = clock();

	char temp;

	if (d < 0)
		d = length + d;

	if (d == length)
		return (double)0;
	else if (d > length)
		d = d%length;

	if (d < length - d)
	{
		for (int i = 0; i < d; i++)
		{
			temp = *(string + i);
			*(string + i) = *(string + length - d + i);
			*(string + length - d + i) = temp;
		}

		end = clock();
		time = (float)(end - start) / (CLOCKS_PER_SEC);
		printf("%.20f\n", time);

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

		end = clock();
		time = (double)(end - start) / (CLOCKS_PER_SEC);

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

		end = clock();
		time = (double)(end - start) / (CLOCKS_PER_SEC);

		return (time + T_bw(string + length - d, 2 * d - length, d));
	}
}
