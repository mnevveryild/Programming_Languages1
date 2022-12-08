#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
