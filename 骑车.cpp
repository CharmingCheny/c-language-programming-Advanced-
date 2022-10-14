#include<stdio.h>
#include<math.h>
struct Partner
{
	float v,t; 
}a[10000];
int min(int a,int b)
{
	return a<b?a:b;
}
int main()
{
	int n;
	while(scanf("%d",&n)&&n)
	{
		int ans=1000000000;
		for(int i=0;i<n;i++)
			scanf("%f%f",&a[i].v,&a[i].t);
		for(int j=0;j<n;j++)
		{
			if(a[j].t<0)
				continue;
			else
				ans=min(ans,(int)ceil(4500.0/(a[j].v/3.6))+a[j].t);
		}		
		printf("%d\n",ans);
	}
	return 0;
}
