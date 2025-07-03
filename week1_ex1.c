#include<stdio.h>
int main(){float a;float sum=0;int pass=0;for(int i=0;i<5;i++){scanf("%f",&a);sum+=a;if(a>49){printf("%s","no pass \n");}else {printf("%s","pass \n");}}printf("%f",sum/5);return 0;}
