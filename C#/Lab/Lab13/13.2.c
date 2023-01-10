#include <stdio.h>
#include <stdlib.h>


int ortalama(void){
	int i=0,a,top;
	float ort;
	printf("bes sayi giriniz");
	
	while(i!=5){
		scanf("%d",&a);
		top+=a;
		i++;
	}
    ort=(float)top/i;
	
	return ort;
}
int main() {
	
	float a;
	a=ortalama();
	printf("%f",a);
	
	
	
	
	
	
	
	
	return 0;
}
