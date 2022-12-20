#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char x;
	x=x;
	int s,a;
	int f=1;
	int top=1;
	
	
	printf("bir sinir giriniz");
	scanf("%d",&a);
	
	for(s=1;s<=a;s++)
	{
		f=f*s;
		top=top+x^s/f;
		printf("%d +" ,top);
	
	}
	

			
	return 0;
}
