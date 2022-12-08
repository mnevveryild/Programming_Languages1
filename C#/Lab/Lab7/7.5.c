#include <stdio.h>
#include <stdlib.h>


int main()
 {
 
    int para,ikiYuz,yuz,elli,yirmi,on;
    printf ("para miktarini giriniz");
    scanf("%d",&para);
    
    ikiYuz=para/200;
    para=para%200;
    yuz=para/100;
    para=para%100;
	elli=para/50;
    para=para%50;
    yirmi=para/20;
    para=para%20;
    on=para/10;
    para=para%10;
    
    printf("%d adet 200?, %d adet 100?, %d adet 50?, %d adet 20?, %d adet 10?",ikiYuz,yuz,elli,yirmi,on);
    


	return 0;
}
