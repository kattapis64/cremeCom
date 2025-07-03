#include <stdio.h>
int main(){
	printf("%s","Enter Multiplication Table Number : ");
	int x;
	scanf("%d",&x);
	for(int i=1;i<=12;i++){
		printf("%d x %d = %d\n",x,i,x*i);
	}
	return 0;
}