#include<stdio.h>
int Count(int n,int k)
{
    if(k==1)
        return 1;
    if(k>n||k==0)
        return 0;
    else
        return Count(n-1,k-1)+k*Count(n-1,k);
}
int main()
{
	int k,n,num;
	scanf("%d%d",&n,&k);
	num=Count(n,k);
	printf("%d",num);
	
}
