#include <stdio.h>
int Judge(int i)
{
	int j; 
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			return 0;
			break;
		}
	}
	if(i==j)
	{
		return 1;
	}
}
void Prime(int i,int n)
{
	int j,max=0; 
	for(j=2;j<i;j++)
	{
		if(i%j==0&&Judge(j)==1)
		{
			max=j;
		}
	}
	if(max!=0) {
		if(i<n)
			printf("%d,",max);
		else
			printf("%d",max);
	}
	else{
		if(i<n)
			printf("%d,",i);
		else
			printf("%d",i);
	}
}
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		Prime(i,n);
	}
	return 0;
}
