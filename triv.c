char * T_triv(char * inputstr, int d, int n)
{ 
char save = 0; 
int count = 0;

for(int i = 0; count< d; count++)
{ 
save = inputstr[i];

for (int j = 0; j < n ; j++) 
{  
inputstr[j] = inputstr[j + 1]; 
}  

inputstr[n - 1] = save;  
}
 return inputstr;
}
