#include<stdio.h>
int i=0;
int Judge(int x,int *num)
{
	int *p;
	p=num;
	while(*p!=-1)
	{
		if(*p==x) return 1;
		else p++;
	}
	 return 0;
}
void Form2(int k,int *num)
{
	int j=k;
	if(Judge(j,num)==0)
	{
		num[i]=k;
		i++;
	}
	while(j<1000)
	{
		j=3*j+1;
		Form2(j,num);
	}
}
void Form1(int k,int *num)
{
	int j = k;
	num[i]=j;
	i++;
	while(j<100)
	{
		j=2*j+1;
		Form1(j,num);
	}
	return;
}


int main()
{
    int k;
	int x,num[1000]={-1};
	scanf("%d,%d",&k,&x);
	Form1(k,num);
	printf("0");
	Form2(k,num);
	printf("0");
	printf("%d",num[10]);
	int ans=Judge(x,num);
	if(ans==1)
		printf("YES");
	else
		printf("NO");
	return 0;
}
