#include <stdio.h>
void Prime(int i)
{
	int j; 
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			printf("no\n");
			break;
		}
	}
	if(i==j)
	{
		printf("yes\n");
	}
}
int main()
{
	int i;
	scanf("%d",&i);
	Prime(i);
	return 0;
}
