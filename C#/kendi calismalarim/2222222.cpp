#include <stdio.h>

int alan(int a){
	
	int alan=0;
	alan=a*a;
	printf("%d",alan);
	return alan;
	
}


int main(){
	int a;
	printf("kenar uzunlugunu giriniz");
	scanf("%d",&a);
	
	alan(a);
	
	
	return 0;
}
