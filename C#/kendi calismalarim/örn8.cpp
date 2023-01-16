/*otopark ücretlendirme*/

#include <stdio.h>

int main(){
	
	int s,total=0;
	
	printf("kac saat otoparktaydiniz?  ");
	scanf("%d",&s);
	
	if(s<4){
		total=10;
	}
	else if(s<8&&s>4){
	
		total=22;
		}
		else if(s<12&&s>8){
		
			total=37;
			}
			else if(s>12);
			{
			total=57;
		}
		
		printf("ucret= %d",total);
		return 0;
}
