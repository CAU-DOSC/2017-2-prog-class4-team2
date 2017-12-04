char* T_rev(char*str, int n)
{
	char *temp = (char*)malloc(sizeof(char)*n);
	for (int i = 0; i < n; i++)
		temp[i] = str[n - i - 1];
	return temp;
}
