#include<stdio.h>

int gecme(int vize,int final){
	
	float sonuc=0;
	
	sonuc=vize*0.4+final*0.6;
	
	printf(" gecme notunuz==> %f",sonuc);
	
	return sonuc;
	
}

int main(){
	
	int vize,final;
	int sonuc;
	
	printf("ogrencinin vize notunu giriniz");
	scanf("%d",&vize);
	printf("ogrencinin final notunu giriniz");
	scanf("%d",&final);
	
	gecme(vize,final);
	
	return 0;
}
