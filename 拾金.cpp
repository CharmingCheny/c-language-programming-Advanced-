#include<stdio.h>
struct Metal{
	int weight;	//������
	int value;	//�ܼ�ֵ
	float unit;//����
}a[10000],t;

void Sort(int n)
{
	int swap=1,i,sorted=0;
	while(swap)
{
	swap=0;
	for(i=0;i<n-1-sorted;i++)
	{
		if(a[i+1].unit>a[i].unit)
		{
			swap=1;
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	sorted++;
	}
}
int main()
{
	int k,w,s,i;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d",&w);//�������� 
		scanf("%d",&s);//�������� 
		for(i=0;i<s;i++)
		{
			scanf("%d%d",&a[i].weight,&a[i].value);
			a[i].unit=1.0*a[i].value/a[i].weight; 
		}
		Sort(s);
		int remain=w;	//ʣ�������
		float maxValue=0;	//����ֵ
		for(int j=0;j<s;j++){
			if(a[j].weight<=remain){
				maxValue+=a[j].unit*a[j].weight;
				remain-=a[j].weight;
			}
			else{
				maxValue+=remain*a[j].unit;
				remain=0;
				break;
			}
		}
		printf("%.2f\n",maxValue);
	}
}
