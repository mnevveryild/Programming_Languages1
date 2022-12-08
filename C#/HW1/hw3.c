#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a;
	
	printf("bir sayi giriniz");
	scanf ("%d", &a);
	
	if(a%2==0){
		printf("%d cift sayidir", a);
	}
	
	else 
		printf("%d tek sayidir",a);
		
		
	return 0;
}
