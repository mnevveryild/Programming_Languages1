#include<stdio.h>

int asal(int a){
	int i,k;
	for(i=2;i<a;i++){
		
		if(a%i==0){
			k++;
			printf("asal sayi degildir");
		}
		else if(k==0){
		
		printf("asal sayidir");
		
		}
	}
	
}

int main(){
	
	int a;

	printf("bir sayi giriniz");
	scanf("%d",&a);
	
	asal(a);
	
	return 0;
	
}
