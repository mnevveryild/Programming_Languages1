#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi,bas,s=0,n;
	printf("bir sayi giriniz");
	scanf("%d, &sayi");
	n=sayi;
	while(n>0)
	{
		bas=n%10;
		s=s*10+bas;
		n=n/10;
		
		
	}
	
	if(s==sayi){
		printf("%d palindrom bir sayidir", sayi);
		
	}
	else 
		printf("%d palindrom sayi degildir", sayi);
	
	return 0;
}
