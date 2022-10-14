#include<stdio.h>
#include<stdlib.h>
int Ackmann(int m,int n)
{
	if(m==0)
	{
		return n+1;
	}
	else if(m>0&&n==0)
	{
		return Ackmann(m-1,1);
	}
	else if(m>0&&n>0)
	{
		return Ackmann(m-1,Ackmann(m, n-1));
	}
	else
		exit(0);
}
int main()
{
	int m,n,k;
	scanf("%d%d",&m,&n);
	k=Ackmann(m,n);
	printf("%d",k);
	return 0;
}
