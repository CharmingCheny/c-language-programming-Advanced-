#include<stdio.h>
int Counting(int n)
{
	if(n == 1)
		return 1;
	else if(n == 2)
		return 2;
	else 
		return Counting(n-1)+Counting(n-2);
}
int main()
{
	int n;
	while(scanf("%d",&n)!= EOF)
	{
		printf("%d\n",Counting(n));
	}
	return 0;
}


