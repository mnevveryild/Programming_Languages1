#include<stdio.h>

int main(){
	
	int dizi[10]={1,5,2,4,5,6,78,12,1,3};
	int dizi2[10];
	int i,j;
	
	for (i=0,j=9;i<10,j=0;j--,i++){
		
		dizi2[j]=dizi[i];
	}
	
	printf("  %d  ",&dizi2[10]);
	
	return 0;
	
}
