#include<stdio.h>
int main(){
	char grade;
	int hour,year;
	char end;
	do{
		int money;
		printf("%s","Input level : ");

		scanf("%s",&grade);
		printf("%s","Input number of hours : ");

		scanf("%d",&hour);
		printf("%s","Input number of years : ");

		scanf("%d",&year);
		
			if (grade=='A'){
				money=hour*1000;}
			if (grade=='B'){

				money=hour*750;}
			if (grade=='C'){
				money=hour*500;}

			if (grade=='D'){
				money=hour*250;
}
			if (grade=='E'){
				money=hour*150;}
		
		if(year>5)
			money+=100;
		printf("Your wage is : %d\n",money);
		printf("%s","Exit? yes:(y/Y) no:(n/N) ");
		scanf("%s",&end);
		
		if(end=='y' || end=='Y')
			end='m';
		
	}while(end!='m');
	return 0;
}