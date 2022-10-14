#include<stdio.h>
int Fibonacci(int a)
{
	if (a <= 2)
		return 1;
	else
		return Fibonacci(a - 1) + Fibonacci(a - 2);
}
int main()
{
	int n,a,i=0,b;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a);
		b=Fibonacci(a) % 1000;
		printf("%d\n",b);
		i++; 
	}
	return 0;
}
