#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fptr;

	
	//add ecception
	if(fptr==NULL){
		printf("%s","file created uncusseful");
		return EXIT_FAILURE;
	} 
	
	fptr = fopen("files.txt.txt","w");
	fputs("<3 l u k c \n",fptr);
	fputs("<3 h a n",fptr);
	fclose(fptr);
	fptr = fopen("files.txt.txt","r");
	
	
	char readString[100];
	while(fgets(readString,100,fptr)){
	
	printf("%s",readString);}
	

	fclose(fptr);
	
	
	return 0;
}