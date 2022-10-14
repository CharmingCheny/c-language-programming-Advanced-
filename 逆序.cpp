#include<stdio.h>
#include<math.h>
int Count(int n)
{
	int i;

	if(n==0)
	{
		i=1;
	}
	for(i=0;n!=0;i++)
	{
		n/=10;
	}
	return i;
}
int main()
{
	int n,i,j,w;
	scanf("%d",&n);
	i = Count(n);
	int a[i];
	for(j=0;j<i;j++)
	{
		int power = (int)pow((float)10,(float)j);
		w = n / power % 10;
		a[j] = w;
	}
	for(int k=0;k<i;k++)
	{
		printf("%d",a[k]);
	}
	return 0;

}





