#include <stdio.h>
#include <stdlib.h>



int asal(int){
	
	int main(){
		int a,b;
		printf("bir sayi giriniz");
		scanf("%d", &a);
		b=asal(a);
		
		if(b==0)
			printf("%d asal sayi degildir", a);
		else
			printf("%d asal sayidir",a);
		
		}
		
		
		
	int asal(int a){
	
	int i;
	for(i=1;i<=a;i++){
			if(a%i==0){
				return 0;
			else
				return 1;
				
			}		
		
	}	
	return 0;
}
