 #include <stdio.h>
 void swap(int &a,int &b)
 {
 	int t =a;
 	a=b;
 	b=t;
 }
 int main() 
 {
 	int n,ans,x[100],y[100];
 	scanf("%d",&n);
 	ans=0;
 for(int i= 0;i!=n; ++i) 
 	scanf("%d%d", x+i, y+i);
 for(int i=0; i<n;++i)
 	for(int j=0; j<n-1;++j)
		for(int k=j+ 1;k< n; ++k){
 			int m=0;
			if((x[j]+x[k]<=x[i])&(y[j]<=y[i])&&(y[k]<=y[i])) m=1;
			if((y[j]+y[k]<=y[i])&(x[j]<=x[i])&&(x[k]<=x[i])) m=1;
			swap(x[j],y[j]);
			if((x[j]+x[k]<=x[i])&(y[j]<=y[i])&&(y[k]<=y[i])) m=1;
			if((y[j]+y[k]<=y[i])&(x[j]<=x[i])&&(x[k]<=x[i])) m=1;
			swap(x[k],y[k]);
			/*if((x[j]+x[k]<=x[i])&(y[j]<=y[i])&&(y[k]<=y[i])) m=1;
			if((y[j]+y[k]<=y[i])&(x[j]<=x[i])&&(x[k]<=x[i])) m=1;
			swap(x[j],y[j]);
			if((x[j]+x[k]<=x[i])&(y[j]<=y[i])&&(y[k]<=y[i])) m=1;
			if((y[j]+y[k]<=y[i])&(x[j]<=x[i])&&(x[k]<=x[i])) m=1;
			swap(x[k],y[k]);*/
			ans+=m;
		}
		printf("%d\n",ans);
}
