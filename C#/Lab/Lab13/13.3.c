#include <stdio.h>
#include <stdlib.h>


int tekcift(int);

		
int main() {
	
	int b, x;
	printf("Enter a number :");
	scanf("%d", &b);
	x=tekcift(b);
	
	if(x==0)
		printf("Sayi cifttir.");
	else
		printf("Sayi tektir.");	
	
	
	return 0;
}

int tekcift(int a){
	
	if(a%2==0)
		return 0;
	else
		return 1;		
}
