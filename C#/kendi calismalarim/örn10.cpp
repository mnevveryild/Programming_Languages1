/*kup*/

#include<stdio.h>

int kup(int a){
	
	int total=0;
	total=a*a*a;
	printf("%d",total);
	return total;
}

int main(){
	
	int a;
	printf("hesaplamak istediginiz sayiyi giriniz--->");
	scanf("%d",&a);
	kup(a);
	
	return 0;
	
}
