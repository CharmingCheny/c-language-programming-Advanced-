#include<stdio.h>
long long mod(long long b,long long p,long long k){
	if (p == 1)
        return b % k;
    if (p % 2)
        return mod(b % k, p - 1, k) * b % k;  
    else
        return mod((b * b) % k, p / 2, k);
}
int main(){
    long long b,k,p;
	scanf("%lld%lld%lld",&b,&p,&k);
    printf("%lld^%lld mod %lld=%lld",b,p,k,mod(b,p,k));
    return 0;
}

