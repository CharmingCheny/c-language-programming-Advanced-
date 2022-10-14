#include<stdio.h>
void Sort(int *a,int length)
{

{
	for (int i=0;i<length;i++)
	{
		for (int j=0;j<length-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				int temp;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}

}
int main()
{
	int n,i,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	Sort(a,n);
	for(i=n-1;i>n-k;i--)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n-k]);
	return 0; 
}
