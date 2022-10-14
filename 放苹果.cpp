#include<stdio.h>
int Count(int m,int n)
{
    if(m==0||n==1)
        return 1;
    if(n>m)
        return Count(m,m);
    else
        return Count(m,n-1)+Count(m-n,n);

}
int main()
{
	int t,m,n,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		k =  Count(m,n);
		printf("%d",k);
		
	}
}
