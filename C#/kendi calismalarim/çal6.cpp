#include <stdio.h>

int main(){
	
	int i=0;
	char A[296];
	
	printf("cümleyi yaziniz");
	gets(A);
	
	while(A[i]!=NULL){
		
		if(A[i]>96&&A[i]<123){
			printf("%c", A[i]);
		}
		i++;
		
	}

	return 0;	
}
