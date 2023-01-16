#include <stdio.h>
/*matris carpim*/


int main(){
	
	int A[3][3];
	int B[3][3];
	int sonuc[3][3];
	int toplam=0;
	
	printf("A matris degerlerini giriniz");
	
	for(int i=0;i<3;i++){
		
		for(int j=0;j<3;j++){
			scanf("%d",&A[i][j]);
			printf("i,j (%d,%d): %d \n",i,j,A[i][j]);
		}	
			
			
	}
	
	printf("B matris degerlerini giriniz");
    
    for (int i = 0; i < 3; i++) {
    
      for (int j = 0; j < 3; j++) {
    	scanf("%d", &B[i][j]);
		printf("i,j (%d,%d): %d\n",i, j,B[i][j]);
    
       }  
    
    }  
   
   
	
	for( int i=0;i<3;i++){
		
		for( int j=0;j<3;j++){
			
		toplam = toplam +A[i][j] *B[i][j];
			sonuc[i][j] = toplam;
			printf(" %d ", sonuc[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
