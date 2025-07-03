#include <stdio.h>
#include <math.h>

int main(){
		int l;
		scanf("%d",&l);
		char str[l];
		scanf(" %s",str);
		for(int i =0;i<l;i++){

			printf("%c",2*str[i]-130+3*l);
		}
	int ld;
	scanf("\n%d",&ld);

	char strd[ld];
	scanf(" %s",strd);
	for(int i =0;i<ld;i++){

		printf("%c",(strd[i]+130-3*ld)/2);
	}


		
			
			
					

		
		
		
		
	
		
		
	
	return 0;
}