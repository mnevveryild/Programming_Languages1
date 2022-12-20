#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int s,a;
	int f=1;
	
	printf("bir sayi giriniz");
	scanf("%d", &a);
	
	s=1;
	while (s<=a) 
	{
		f=f*s;
		s++;
	}
	
	printf("%d",f);
	
	return 0;
}
