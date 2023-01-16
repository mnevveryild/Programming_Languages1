#include<stdio.h>

int main(){
	
	int A[10][2];
	int i,j;
	int kilo=0,boy=0;
	int ortk=0,ortb=0;
	
	for(i=0;i<10;i++){
		for(j=0;j<1;j++){
			printf("%d.ogrencinin kilo degerini giriniz",i+1);
			scanf("%d" ,&A[i][j]);
			kilo=kilo+A[i][j];
		}
	}
	for(i=0;i<10;i++){
		for(j=1;j<2;j++){
			printf("%d.ogrencinin boy degerini giriniz",i+1);
			scanf("%d",&A[i][j]);
			boy=boy+A[i][j];
		}
	}
	
	ortb=boy/10;
	ortk=kilo/10;
	
	printf("ortalama boy = %d",ortb);
	printf("ortalama kilo = %d",ortk);
	
	return 0;
	
}
