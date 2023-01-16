#include <stdio.h>

int main(){
	
	int F[100];
	int i,n,faktoriyel=1;
	
	printf("bir sayi giriniz");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		
		F[i]=i+1;
		faktoriyel=faktoriyel*F[i];
	}	
	printf("%d!= %d\n",n,faktoriyel);	
	
	return 0 ;
			
}
