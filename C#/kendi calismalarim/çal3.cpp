#include <stdio.h>

int main(){
	
	int i,N,c,b,A;
	int B[5];
	
	printf("bir sayi giriniz==>");
	scanf("%d",&N);
	A=N;
	while(N>0){
		N=N/10;
		b++;
	}
	
	if(b>5){
		printf("yeni bir sayi giriniz");
	}
	else {
	
	for(c=0,i=0;i<5;i++){
		c=A%10;
		B[i]=c;
		A=A/10;
		printf("\n B[%d]=%d",i,B[i]);
	}	
	}
	return 0;
	
}
