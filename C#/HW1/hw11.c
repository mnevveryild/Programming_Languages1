#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int t=0,c=1,s;
	
	for(s=1;s<=10;s++){
		t+=s;
		c*=s;
		
	}
	
	printf("%d %d", t,c);
	
	return 0;
}
