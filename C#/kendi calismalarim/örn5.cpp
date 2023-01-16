/*girilen þehirleri alt alta yazdýr*/
#include<stdio.h>
int main(){
	
	char sehirler[100];
	int i;
	
	printf("sehirleri giriniz...");
	
	for(i=0;i<5;i++){
		
		scanf("%s",sehirler);
	}
	
	for(i=0;i<5;i++){
	
		printf("%s \n",sehirler);
	}	
	
	return 0;
}
