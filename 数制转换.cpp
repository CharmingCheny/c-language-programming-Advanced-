#include<stdio.h>
int i=0;
int b=1;
void Trans(int x,int m,int *num)
{
	int a;
	a = x % m;
	if(b!=0)
	{
		num[i]=a;
		b = x / m;
		i++;
		Trans(b,m,num);
	}
	else 
		return;
}
int main()
{
	int x,m,num[100];
	scanf("%d%d",&x,&m);
	Trans(x,m,num);
	for(int j=i-1;j>=0;j--)
	{
		switch(num[j])
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:printf("%d",num[j]);break;
			case 10:printf("A");break;
			case 11:printf("B");break;
			case 12:printf("C");break;
			case 13:printf("D");break;
			case 14:printf("E");break;
			case 15:printf("F");break;
			
			
		}
	}
	return 0;
}
