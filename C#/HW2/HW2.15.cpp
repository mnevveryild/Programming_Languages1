#include <stdio.h>
int main()
{
    int sayi,n,bas,top=0;
    printf("bir sayi giriniz lutfen\n");
    scanf("%d",&sayi);
    n=sayi;
    while(n>0)
    {
        bas=n%10;
        top=top*10+bas;
        n=n/10;
    }
    if(sayi==top)
        printf("\nsayiniz polindrom sayidir");
    else    
        printf("\nsayi polindrom degildir");
    return 0;



}
