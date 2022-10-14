#include <stdio.h>
#include <stdlib.h>
int main()
{
	int l,r;
	int i,j,k,flag;
	while(scanf("%d%d",&l,&r)!=EOF)
	{
		flag=0;
		for(i=l;i<=r;i++)
		{
			for(j=i;j<=r;j++)
			{
				for(k=j;k<=r;k++)
				{
					if(i*i+j*j==k*k)
					{
						printf("%d %d %d\n",i,j,k);
						flag = 1;
					}
				}
			}
		}
		if(flag==0)
		{
			printf("NO\n");
		}
	}
	return 0;
	
}
