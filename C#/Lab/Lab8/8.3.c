#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()

{int a;
	
	printf("bir sayi giriniz");
	scanf ("%d", &a);
	
	if(a%2==0){
		printf("%d cift sayidir", a);
	}
	
	else 
		printf("%d tek sayidir",a);
		
		
	return 0;
	

}

