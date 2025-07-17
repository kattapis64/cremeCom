
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
	int lr;
	scanf("\n%d",&lr);

	char strd[lr];
	scanf(" %s",strd);
	for(int i =0;i<lr;i++){

		printf("%c",(strd[i]+130-3*lr)/2);
	}


		
			
			
					

		
		
		
		
	
		
		
	
	return 0;
}