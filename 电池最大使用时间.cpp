#include<stdio.h>
int a[1000];
float max(float maxn,float a)
{
	return maxn>a?maxn:a;
}
float Find(int n)
{
	float sum,maxn;
	
	{
         sum=maxn=0;
         for(int i=0;i<n;i++) 
		 {
			sum+=a[i];
			maxn=max(maxn,a[i]);
		 }
         if(maxn>sum-maxn) 
		 	return sum-maxn;
         else 
         	return sum/2.0;
	}
}
int main()
{
	int n,i;
	float time;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		time=Find(n);
		printf("%.1f\n",time);
	}
	return 0;
	
	
}
