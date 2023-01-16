/*lab10.1*/

#include <stdio.h>

int main(){
	
	int dizi[8];
	int i,ort=0,top=0;
	
	
	for(i=0;i<8;i++){
	
	printf("%d.elemani giriniz=",i+1);
	scanf("%d",&dizi[i]);
	top=top+dizi[i];
	}
	ort=top/7;
	printf("%d",ort);
	
	return 0;

}
