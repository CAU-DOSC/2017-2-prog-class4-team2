#include<Stdio.h>

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


char * T_juggle(char * inputstr, int d, int n)
{
	int h, i, j, k, l, gcd, temp, da;
	while(d>n)
	d-=n;
	if(d<0)
	{
		da= 0-d;
		gcd=GCD(n,da);
		k=n/gcd;
		l=da/gcd;
	}
	else
	{
		gcd=GCD(n,d);
		k=n/gcd;
		l=d/gcd;
	}
	
	if(d<0)
	{
		for(i=0;i<gcd;i++)
		{
			for(h=0;h<l;h++)
			{
				temp=*(inputstr + i);
				for(j=0;j<k-1;j++)
				{
					*(inputstr + i + gcd * j)=*(inputstr + i + gcd * (j + 1));
				}
				*(inputstr + i + gcd * (k - 1))=temp;
			}
		}
	}	
	else
	{
		for(i=0;i<gcd;i++)
		{
			for(h=0;h<l;h++)
			{
				temp=*(inputstr + i + gcd * (k - 1));
				for(j=k-2;j>=0;j--)
				{
					*(inputstr + i + gcd * (j + 1))=*(inputstr + i + gcd * j);
				}
				*(inputstr + i)=temp;
			}
		}
	}
	
	return inputstr;
}

int main()
{
	int n,d;
	scanf("%d %d",&n,&d);
	char arr[n];
	scanf("%s", arr);
	*arr = *T_juggle(arr , d, n);
	puts(arr);
}
