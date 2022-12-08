#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,b,c;
	
	printf("iki sayi giriniz");
	scanf("%d", &a);
	scanf("%d", &b);
	
	c=a;
	a=b;
	b=c;
	
	printf("a= %d , b= %d",a,b);
	
	
	
	
	return 0;
}
