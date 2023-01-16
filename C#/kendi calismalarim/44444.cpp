#include<stdio.h>

int enbuy(int dizi[10]){
	int max1=0,max2=0;
	int i;
	
	for(i=0;i<10;i++){
		
	
		if(dizi[i]>max1){
			max2=max1;
			max1=dizi[i];
		}
	
	}	
	
	printf("en buyuk 1.sayi= %d\n",max1);
	printf("en buyuk 2.sayi= %d",max2);
	
}

int main(){
	
	int i;
	int dizi[10];
	
	printf("dizinin elemanlarini giriniz");
	
	for(i=0;i<10;i++){
		
		scanf("%d" ,&dizi[i]);
		
	}
		
		enbuy(dizi);
			
		return 0;
		
	}
	
	
	
	
	
	
	
	
	

