#include <stdio.h>
#include <stdlib.h>


int main()
 {
 	int i;
 	int A[8];
 	int top=0;
 	float ort=0;
 	
 	
 	for(i=1;i<=8;i++){
 		
	 	printf("%d . degeri giriniz", i);
	 	scanf("%d",&A[i]);
	 	
	 	top=top+A[i];
	 	
 	}
 	
 	ort=top/8;
 	printf("%.2f",ort);
 	
	return 0;
}
