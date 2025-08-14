#include<stdio.h>
#include<stdlib.h>
void readFile(char f[]){
	printf("******************************\n");
	int choice;
	char mode;
	int num;
	char name[50];
	int marks;
	FILE *fptr;
	printf("Enter Read Mode\n");

		fptr = fopen(f,"r");
		char readString[100];
		while(fgets(readString,100,fptr)){
		
		printf("%s",readString);}
		fclose(fptr);
		printf("\nExiting Read Mode\n");
	printf("******************************\n");
}
void writeFile(char f[]){
	printf("******************************\n");
	int choice;
	FILE *fptr;
	char mode;
	int num;
	char name[50];
	int marks;
	printf("Enter Write Mode\nEnter Student Number: ");
	scanf("%d",&num);

	fptr = fopen(f,"w");
	if(fptr == NULL){
		printf("Error");
		exit(1);
	}	
	for(int i =0;i< num;i++){
		printf("Enter name : ");
		scanf("%s",name);
		printf("Enter marks : ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName :%s\nMarks :%d\n",name,marks);
				}
		fclose(fptr);
		printf("Exiting Writing Mode\n");
	printf("******************************\n");
}
void appendFile(char f[]){
	printf("******************************\n");
	int choice;
	FILE *fptr;
	char mode;
	int num;
	char name[50];
	int marks;
	printf("Enter Append Mode\nEnter Student Number: ");
	scanf("%d",&num);
	fptr = fopen(f,"a");
	if(fptr == NULL){
	printf("Error");
	exit(1);
	}	
	for(int i =0;i< num;i++){
		printf("Enter name : ");
		scanf("%s",name);
		printf("Enter marks : ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName :%s\nMarks :%d\n",name,marks);
		}fclose(fptr);
		printf("Exiting Append Mode\n");
	printf("******************************\n");
}
int main(){
	int choice;
	char mode;
	int num;
	char name[50];
	int marks;
	FILE *fptr;
	do{
		printf("Choose your choice: \n");
		printf("1. Write\n2.Append\n3.Read\n6.Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case(1):
				writeFile("student.txt");
				break;
			case(2):
				appendFile("student.txt");
				break;
			case(3):
				readFile("student.txt");
				break;
			//case(4):
			//case(5):
			case(6):
				break;
		}
	}while(choice!=6);
		
		
}