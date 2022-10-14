#include<stdio.h>
int a[20000];
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
int main()
{
	int n,b,sum=0,j,i;
	scanf("%d %d",&n,&b);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	Sort(a,n);
	for(j=n-1;j>=0;j--)
	{
		sum+=a[j];
		if(sum>=b)
			break;
	}
	printf("%d",n-j);
	return 0;
}
