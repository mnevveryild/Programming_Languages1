#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int s,a,b;
	
	printf("bir sayi giriniz");
	scanf("%d",&b);
	
	for(a=2;a<=b;a+2){
		s=s+(1/a);
	}
	
	printf("%d", s);
	
	return 0;
}
