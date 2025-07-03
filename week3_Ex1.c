#include<stdio.h>
long double fact(int x){
	long sum=1;
	for(int i=1;i<=x;i++){
		long presum = sum;
		sum*=i;		
		printf("%ld x %d = %ld\n",presum,i,sum);
	}
	return sum;
}

int main(){
	long x;
	scanf("%ld",&x);
	
	printf("%ld",fact(x));
	return 0;
}