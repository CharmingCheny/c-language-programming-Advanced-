#include<stdio.h>
int* Find(int n,int m,int a[])
{
	int i=0,j=1,temp1=100000,temp2;
	static int b[2];
	for(;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==m)
			{
				if(a[i]<a[j])
				{
					if(a[i]<temp1)
						{
							temp1=a[i];temp2=a[j];
						}
				}
				else
				{
					if(a[j]<temp1)
					{
						temp1=a[j];temp2=a[i];						
					}

				}
			}
		}
	}
	if(temp1==100000)
	{
		b[0]=0;b[1]=0;
	}
	else
		b[0]=temp1;b[1]=temp2;
	return b;
}
int main()
{
	int n,m,i,j,*b;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	b=Find(n,m,a);
	if(b[0]==0||b[1]==0)
		printf("No");
	else
		printf("%d %d",b[0],b[1]);
	return 0;
}
