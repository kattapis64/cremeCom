#include<stdio.h>
#include<string.h>
int main(){
	int grade = 69;
	int star=0;
	if (grade >=71){
	
		printf("%s","great\n");
		star=5;}
	else if(grade >=51){
	
		printf("%s","good\n");
		star=4;}
	else if(grade >=31){
	
		printf("%s","normal\n");
		star=3;}
	else{
		printf("%s","failed\n");
		star=1;}
	int i=0;
	char ast='*';
	while (i<=star){
		printf("%c",ast);
		
		i+=1;
	}
			return 0;
				
}