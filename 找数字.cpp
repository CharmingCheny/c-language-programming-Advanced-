#include<stdio.h>
int Find(int t,int a[],int n)
{
	int temp=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=t)
		{
			if(a[i]>temp)
				temp=a[i];
		}
	}
	if(temp==0)
	{
		return -1;
	}
	else
		return temp;
}
int main()
{
	int m,n,i,t,f;//m:asks,n:length
	scanf("%d%d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&t);
		f=Find(t,a,n);
		printf("%d\n",f);
	}
	return 0;
}
