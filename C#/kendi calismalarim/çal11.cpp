/* dortgen*/

#include<stdio.h>

int dortgen(int a,int n){
	int i,j;
	 
	for(i=0;i<n;i++){
		for(j=0;j<a;j++){
			printf("*");
		}
		printf("\n");
	}
	
}


int main(){
	
	int n,a;
	printf("satir sayisini giriniz");
	scanf("%d",&n);
	printf("sutun sayisini giriniz");
	scanf("%d",&a);
	printf("\n");
	
	dortgen(a,n);
	
	return 0;
	
}
