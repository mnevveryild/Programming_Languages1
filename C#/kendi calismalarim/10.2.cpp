/*10.2*/

#include <stdio.h>

	int main(){
	
	int dizi[10];
	int i,kare;
	
	
	for(kare=0,i=0;i<10;i++){
		printf("%d.terimi giriniz  \n",i+1);
		scanf("%d",&dizi[i]);
		
		if(dizi[i]==-1){
			break;	
		}
		else
			kare=dizi[i]*dizi[i];
			printf("karesi=%d \n",kare);
	}			
			
		return 0;
		
}
	
