#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,j,a,n;
	int A[i],B[j];
	
	printf("dizi kac elemanlidir?");
	scanf("%d",&a);
	
	for(i=0,j=a-1;i<a,j>=0;i++,j--){
		
		scanf("%d",&A[i]);
		printf("A[%d]=%d\n",i,A[i]);
		B[j]=A[i];
		printf("B[%d]=%d\n",j,B[j]);	
			
	}	
	
	
	
	
	return 0;
}
