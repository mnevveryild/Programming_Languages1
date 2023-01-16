#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 

// dizideki unique elemanlari yazdir
// see muratoksuzer.com
int main()
{
    int n;
    int dizi_uzunlugu; 
 	printf("\nDizi uzunlugunu giriniz:\n"); 
	 
	scanf("%d", &dizi_uzunlugu);
	 
	n = dizi_uzunlugu; 
	 
	int dizi[n]; 
	 
	int kopya_dizi[n]; 
	 
	int i = 0; 
	while(n > 0) {
		
		printf("%d. elemani giriniz:\n" , i+1);
		
		scanf("%d", &dizi[i]);
		
		i++;
		n--;
	} 
	
	for(i = 0; i < dizi_uzunlugu; i++){
	
		int eleman = dizi[i];
		
		int bulunmaSayisi = 0;
	
		for(int j = 0; j < dizi_uzunlugu; j++) {
		
			if(dizi[j] == eleman) {
			
				bulunmaSayisi++;
			}	 
		}
		
		if(bulunmaSayisi == 1) {
		
			printf("unique eleman: %d\n" , eleman);
		}
		
	} 

    return(0);
}
