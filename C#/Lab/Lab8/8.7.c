#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,b,c;
    printf("ilk sayiyi giriniz");
    scanf("%d",&a);
    
    printf("ikinci sayiyi giriniz");
    scanf("%d",&b);
    
    printf("ucuncu sayiyi giriniz");
    scanf("%d",&c);

    if (a<b&&c<b){
	
        printf("en buyuk sayi %d",b);
    }
    else 
		if (b<c&&a<c){
        printf("en buyuk sayi %d",c);
    }
   		else
        printf("en buyuk sayi %d",a);
	return 0;
}
