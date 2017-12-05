#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(char arr[], int i1, int i2, int d)
{
	for (int i = 0; i<d; ++i)
	{
		char temp = arr[i1 + i];
		arr[i1 + i] = arr[i2 + i];
		arr[i2 + i] = temp;
	}
}
void rotate_blockswap(char arr[], int d, int size)
{
	if (d == 0 || d == size)
		return;

	if (size - d == d)
	{
		swap(arr, 0, size - d, d);
		return;
	}

	if (d < size - d)
	{
		swap(arr, 0, size - d, d);
		rotate_blockswap(arr, d, size - d);
	}

	else
	{
		swap(arr, 0, d, size - d);
		rotate_blockswap(arr + size - d, (2 * d) - size, d);
	}
}

int main()
{
	int n, d, i;
	scanf("%d", &n);
	srand(time(NULL));


	scanf("%d", &d);

	char* arr = (char*)malloc(sizeof(char)*(n + 1));
	char inputchar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < n; i++)
	{
		arr[i] = inputchar[rand() % 51 + 1];
	}
	arr[n] = '\0';
	printf("before: %s\n", arr);

	if (d < 0)
	{
		d *= -1;

		rotate_blockswap(arr, d, n);

		printf("Rotated Array(counterclockwise): %s\n", arr);
	}

	else if(d>0)
	{
		rotate_blockswap(arr, n - d, n);

		printf("Rotated Array(clockwise): %s\n", arr);
	}

	

	return 0;
}