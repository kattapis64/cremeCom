#include <stdio.h>
#include <stdlib.h>
int main(){
	int number = 13;
	int tries = 0;
	while(1){
		int guess;
		tries +=1;
		printf("%s","Guessing : ");
		scanf("%d",&guess);
		if (guess>number){
		
			printf("%s","Program : Too much\n");
			if(tries==5){
			printf("Program : You guessed in correctly every time");

			break;
			}}
		else if (guess<number){
		
			printf("%s","Program : Too little\n");
			if(tries==5){
			printf("Program : You guessed in correctly every time");

			break;
			}}
		else if(guess=number){
		
			printf("Program : Correct After %d tries",tries);
			break;}
		
	}
	return 0;
}