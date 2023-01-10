#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char str[100];
	int i=0;
	
	printf("stringi giriniz");
	gets(str);
	
	while(str[i]!='\0'){
	

		if(str[i]>96&&str[i]<123){
			
			printf("%c", str[i]);
			
		}
		i++;	
	}

	

	return 0;
}
