#include <stdio.h>
#include <stdlib.h>



int main()
 {
 	
 	int a;
 	
 	printf("sicaklik giriniz");
	scanf("%d", &a);
	
	if (a<0){
		printf("donma noktasinin altinda");
	
	}
	else 
		printf("donma noktasinin ustunde");
		
		
	return 0;
}
