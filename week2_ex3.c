#include<stdio.h>

int main(){
	int x,y,z;
	int d= 0b101;
	printf("%d",d);
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	if(x==y)
	{
		if(y>z){
		
		printf("%s","x = y > z");

		}else if(z>y){
		printf("%s","x = y < z");

		}else{
		printf("%s","x = y == z");

		}
	}
	else if(x>y){
		if(y>z){
		printf("%s","x > y > z");
		}
		else if(z>y){
		printf("%s","x > y < z");

		}else{
		printf("%s","x > y == z");

		}
	}
	else if(x<y)
	{
	if(y>z){
		printf("%s","x < y > z");

		}else if(z>y){
		printf("%s","x < y < z");

		}else{
		printf("%s","x < y == z");

		}
	}
	
	return 0;
}