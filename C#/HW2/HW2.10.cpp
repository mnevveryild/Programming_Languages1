#include <stdio.h>
int main()
{
    int sayi,bas,n;
    printf("bir sayi girniz lutfen");
    scanf("%d",&sayi);
    for(;sayi>0;sayi--)
    {
        int top=0,
        n=sayi;
        while(n>0)
        {
            bas=n%10;
            n=n/10;
            top+=bas*bas*bas;
        }
        if(top==sayi)
            printf("%d ",top);
        
    }
    return 0;
}
