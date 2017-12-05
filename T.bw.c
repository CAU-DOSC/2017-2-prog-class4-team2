#define _CRT_SECURE_NO_WARNINGS
#define LENGTH 100000

#include <stdio.h>
#include <time.h>

double T_bw(char *, int, int);

// main�� �׽�Ʈ���̴� ���߿� �����ٶ�
// LENGTH�� ���� ����� ũ��(100000����)�ؾ� �ð��� ���̰� ��
// ó���� �Ҵ��� malloc�� �ϰ� size�� �Լ� T_bw�� �Ҵ����ּ���

//////////////////////////////////
int main(void)
{
	int n;
	int d;
	char inputstr[LENGTH + 1];

	scanf("%s", inputstr);
	scanf("%d", &d);

	for (int i = 0; i < LENGTH; i++)
	{
		inputstr[i] = (char)(i%10+65);
	}

	inputstr[LENGTH] = '\0';

	printf("%.100lf\n", T_bw(inputstr, d, LENGTH));

	printf("%s\n", inputstr);
}
///////////////////////////////////

double T_bw(char * string, int d, int length)
{
	// d is displacement of the characters before and after change  

	clock_t start, end = 0;
	double time;

	start = clock();

	char temp;

	while (d <= 0)
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
		time = (double)(end - start) / (CLOCKS_PER_SEC);

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
