#include <stdio.h>

int main(){
	
	int A[10];
	int i,a;
	
	for(i=0;i<10;i++){
		
		printf(" \nbir deger giriniz lutfen==>");
		scanf("%d",&a);
		if(a!=-1){
			A[i]=a;
			printf("A[%d]=%d",i,A[i]);
		}
		else
		break;
	}
	return 0;
	
}

