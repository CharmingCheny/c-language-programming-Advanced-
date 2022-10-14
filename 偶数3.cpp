#include<stdio.h>
#include<math.h>
int main(){
	int num,a[1001],w,sum,sum1=0;
	int i,n,m,j,power;
	scanf("%d",&num);
	j=pow(10,num-1);
		for(;j<pow(10,num);j++)
		{
			sum = 0;
			for(m = 0;m<num;m++)
			{
				power = pow((float)10,(float)(m));
				w = j / power % 10;
				a[m] = w;
			}	
			for(n = 0;n<num;n++)
			{
				if(a[n] == 3)
				{
					sum++;
				}
			}
			if(sum % 2 == 0)
			{
				sum1++;
			}
			
		}
		sum1 = sum1 % 12345;
		printf("%d\n",sum1);
		return 0;
	
}
