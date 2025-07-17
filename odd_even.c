#include<stdio.h>
int main(){
	int n;
	int x=1;
	
	while(x!=0){
		scanf("%d",&x);
		//x%2==0? printf("%s","even\n") : printf("%s","odd\n");
		if(x%2==0)
			printf("%s","even\n");
		else if(x%2!=0)
			printf("%s","odd\n");
	}
	
	printf("%s","Program exited successfully");
	return 0;
}