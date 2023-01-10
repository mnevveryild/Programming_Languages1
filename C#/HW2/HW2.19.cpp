#include <stdio.h>
int main()
{
    float top;
    int x,y;
    int ust=1,f=1;
    printf("iki adet sayi giriniz lutfen");
    scanf("%d \n %d",&x,&y);
    
    for(int i=1;i<=y;i++)
    {
        for(int j=1;j<=i;j++)
        {
            ust*=x;
        }
        for(int k=1;k<=i;k++)
        {
            f*=i;
        }
        top+=(float)ust/f;
    
    }
    printf("\nsonuc; %f",top);
}
