#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int sayi,l,h;
	
	printf("bir sayi giriniz");
	scanf("%d",&sayi);
	
	printf("en dusuk sayiyi giriniz");
	scanf("%d",&l);
	
	printf("en yuksek sayiyi giriniz");
	scanf("%d",&h);
	
	
	for(;l<=h;l++){
	
		if(l%sayi==0){
			
			printf("\n%d",l);
		}
			
	}
	return 0;
}
