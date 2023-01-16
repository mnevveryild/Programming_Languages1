#include <stdio.h>

int main(){
	
	int i,j;
	int A[10],B[10];
	
	for(i=0,j=9;i<10,j>-1;i++,j--){
		
		printf("\n A[%d]= ",i);
		scanf("%d",&A[i]);
		B[j]=A[i];
		printf("B[%d]= %d ",j,B[j]);
		}
		
		return 0;
}
