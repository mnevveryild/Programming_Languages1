#include<stdio.h>

int main(){
	
	int A[4][5]={1,67,76,55,0,
				 2,34,79,76,0,
				 3,56,68,57,0,
				 4,66,89,65,0};
	
	int i,j,son;
	
	for(i=0;i<4;i++){
		son=0;
		for(j=1;j<4;j++){
			son=son+A[i][j];
		}	
		son=son/3;
		A[i][4]=son;
	}
	
	//printf("1.ogrenci ortalama= %d\n",A[0][4]);
	//printf("2.ogrenci ortalama= %d\n",A[1][4]);
	//printf("3.ogrenci ortalama= %d\n",A[2][4]);
	//printf("4.ogrenci ortalama= %d\n",A[3][4]);
	
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("\t %d\t",A[i][j]);
		}
		printf("\n");
		
	}
	
	
	return 0;
	
}
