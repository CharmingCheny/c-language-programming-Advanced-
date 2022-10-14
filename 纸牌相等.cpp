#include<stdio.h>
int a[10000],b[10000];
int Move(int n,int sum)
{
	int aver=sum/n,ans=0;
	b[0]=0;
    for(int i = 0; i < n; i++)
    {
        b[i] = b[i - 1] + a[i] - aver;
        if(b[i])
            ans++;
    }
    return ans;
}
int main()
{
	int n,i,sum=0,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		sum+=a[i];
	num=Move(n,sum);
	printf("%d",num);
	return 0;
		
}
