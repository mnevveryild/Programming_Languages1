/*matris*/

#include <stdio.h>

int main(){
	
	int A[2][2],B[2][2],C[2][2];
	int i,j,toplam=0;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("A[%d][%d]==> ",i,j);
			scanf("%d", &A[i][j]);
			printf("B[%d][%d]==> ",i,j);
			scanf("%d", &B[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		toplam=0;
		for(j=0;j<2;j++){
			toplam=A[i][j]+B[i][j];
			C[i][j]=toplam;
			toplam=0;
		}
	}
	printf("\n \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d\t",C[i][j]);	
		}
		printf("\n");
	}
			
	return 0;		
}			
			
			
			
			
			
			
			

