#include <stdio.h>
int main()
{
    
    int sayi,n,bas,top=0;
    printf("bir sayý giriniz lutfen");
    scanf("%d",&sayi);
    n=sayi;
    while(sayi>0)
    {
        bas=sayi%10;
        sayi=sayi/10;
        top+=bas*bas*bas;
    }
    if(top==n)
        printf("sayi bir armstrong sayidir");
    else
        printf("sayi armtrong degildir");
    return 0;
}
