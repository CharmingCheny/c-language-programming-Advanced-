#include <stdio.h>
int main()
{
	int n[21],w[21],e[21],step[21],i;
	n[1]=1;  
	w[1]=1;  
	e[1]=1;  
	step[1]=n[1]+w[1]+e[1];
	scanf("%d",&i);
	for(int j=2;j<=i;j++)
	{
		n[j]=step[j-1];  
		w[j]=n[j-1]+w[j-1]; 
		e[j]=n[j-1]+e[j-1]; 
		step[j]=n[j]+w[j]+e[j]; 
	}
	printf("%d",step[i]);
	return 0;
}


