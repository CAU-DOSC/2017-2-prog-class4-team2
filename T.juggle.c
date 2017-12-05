#include<Stdio.h>

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


