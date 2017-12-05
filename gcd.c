#include<stdio.h>


int GCD(int a, int b)
{
	int i;
	int gcd=1;
	for(i=2;i<=(a > b ? b : a);i++)
	{
		if(a % i == 0 && b % i == 0)
		gcd=i;
	}
	return gcd;
}

