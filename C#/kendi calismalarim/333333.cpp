#include<stdio.h>

int tekcift(int n){
	
	
	if(n%2==0){
		printf(" %d cift sayidir",n);
	}
	else 
		printf(" %d tek sayidir",n);
	
	return n;	
}

int main(){
	
	int n;
	
	printf("bir sayi giriniz");
	scanf("%d",&n);
	
	tekcift(n);
	
	return 0;
}
