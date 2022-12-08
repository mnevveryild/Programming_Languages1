#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int no,v,f;
	float durum;
	
	printf("ogrenci numarasini giriniz");
	scanf("%d", &no);
	
	printf("vize notunu giriniz");
	scanf("%d", &v);
	 
	printf("final notunu giriniz");
	scanf("%d", &f);
	
	durum=v*0.40 + f*0.60;
	
	printf("%d numarali ogrenci gecme notu %f", no,durum);

	return 0;
}
