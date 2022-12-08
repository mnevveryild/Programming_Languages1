#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int r,c,a,t;
	float pi=3.14;
	
	printf("yaricap giriniz");
	scanf("%d", &r);
	
	printf("bir tusa basiniz");
	scanf("%d", &t);
	
	if(t==1){
		c=2*pi*r;
		printf("%d",c);
	}
	
	else
		if(t==2){
	
			a=pi*r*r;
			printf("%d", a);
		}
		else
			printf("yeni bir tusa basiniz");
			
			
	
	return 0;
}
