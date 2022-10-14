#include<stdio.h>
int d=0,sum=1;
void Operate(int k,int m)
{
        if(sum==m) 
        {
                d++;  
        }
        else if(sum>m)
        {
                return;
        }
        else
        {
            for(int i=k;i<=m;i++) 
            {
                sum=sum*i; 
                Operate(i,m); 
                sum=sum/i; 
            }
        }
}
int main()
{
        int n,m;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
                scanf("%d",&m);
                Operate(2,m); 
                printf("%d\n",d);
                d=0; 
        }
         return 0;
}

