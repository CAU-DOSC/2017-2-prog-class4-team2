double T_rev(char*str, int n)
{
	clock_t=start,end;
	double time;
	
	start=clock();
	char *temp = (char*)malloc(sizeof(char)*(n+1));
	for (int i = 0; i < n+10; i++)
		temp[i] = NULL;
	for (int i = 0; i < n; i++)
		temp[i] = str[n - i - 1];
	end=clock();
	
	time=end-start;
	
	return time;
}
