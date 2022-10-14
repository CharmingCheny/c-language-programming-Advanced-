#include <stdio.h>
void Sort(int *a,int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int temp = a[end + 1];
 
		while (end >= 0)
		{
			if (temp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = temp;
	}
}
int Function(int a[],int n)
{
	int sum=0;
	while(n>=4)
        {
            if(a[n-1]+a[0]+a[n-2]+a[0]<a[1]+a[0]+a[n-1]+a[1])
            {
                sum=sum+a[n-1];//a[0]和a[n-1]一起过去
                sum=sum+a[0];//a[0]回来
                sum=sum+a[n-2];//a[0]和a[n-2]一起过去
                sum=sum+a[0];//a[0]回来
            }
            else
            {
                sum=sum+a[1];//a[0]和a[1]一起过去
                sum=sum+a[0];//a[0]回来
                sum=sum+a[n-1];//a[n-2]和a[n-1]一起过去
                sum=sum+a[1];//a[1]回来
            }
            n=n-2;//一个循环处理两人次
        }
        if(n==1)
        	sum=sum+a[0];
        if(n==2)
        	sum=sum+a[1];
        else if(n==3)
        	sum=sum+a[0]+a[1]+a[2];
        return sum;

}
int main()
{
	int t,n,i,j,min;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int time[n];
		for(j=0;j<n;j++)
			scanf("%d",&time[j]);
		Sort(time,n);
		min=Function(time,n);
		printf("%d",min);
	}
	return 0;
 } 
