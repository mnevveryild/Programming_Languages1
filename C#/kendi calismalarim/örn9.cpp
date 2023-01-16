/*toplama*/
#include<stdio.h>

int toplam(int a,int b){
	
	int top=0;
	top=a+b;
	printf("%d",top);
}

int main(){
	
	int a,b;
	
	printf("birinci sayiyi giriniz  ");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz  ");
	scanf("%d",&b);
	
	toplam(a,b);

	return 0;
}

