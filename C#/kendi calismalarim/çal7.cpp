#include<stdio.h>

int main(){
	
	int i=0,a,b,c,d,e;
	char str[296];
	
	printf("bir seyler yaziniz ");
	gets(str);
	
	while(str[i]!=NULL){
		
	if(str[i]>96&&str[i]<123){
		
		if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117){
			a++;		
		}
		else 
			b++;
		}
	else if (str[i]==32){
		c++;
	}
		else if(str[i]>47&&str[i]<58){
		d++;
		}
	    i++;	
	}
	
	printf("Vowels: %d \nConsonants: %d \nDigits: %d \nWhite spaces: %d  ",a,b,d,c);
	
	return 0;
}
