#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,kare;
	int A[10];
	
	for(i=0;i<10;i++){
	
		printf("bir deger giriniz");
		scanf("%d",&A[i]);
		
		if(A[i]==-1){
			printf("gecersiz");
			/*break*/
		}	
		else {
		
			kare=A[i]*A[i];
			
			printf("%d \n",kare);
			
		}		
	}
	
	
	return 0;
}
