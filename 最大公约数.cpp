#include <stdio.h>
int Num(int m,int n)
{
	int a;
	a = m % n;
	if(a != 0)
	{
		m=n;
		n=a;
		Num(m,n);
	}
	else
		return n;
}
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	i=Num(m,n);
	printf("%d",i);
	return 0;
 } 
