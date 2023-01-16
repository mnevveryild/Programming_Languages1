#include<stdio.h>

int uzun(char isim[50]){
	
	printf("isminizi giriniz");
	scanf("%s",&isim);
	
	printf("Kelimenin uzunlugu: %d ",strlen(isim));
}	
	

int ters(void){
	
	char isim[50]="münevver";
	
	printf("tersi = %s",strrev(isim));
	
}



int main(){
	
	ters(void);
	uzun(void);
	
	return 0;
}
