#include <stdio.h>
int main()
{
    int sayi,n,bas,f,top=0;
    printf("bir adet sayi giriniz lutfen");
    scanf("%d",&sayi);
    n=sayi;
    while(sayi>0)
    {
        f=1;
        bas=sayi%10;
        for(int i=1;i<=bas;i++)
        {
            f*=i;
        }
        top+=f;
        sayi=sayi/10;
    }
    if(n==top)
        printf("sayi guclu sayidir");
    else
        printf("sayi guclu sayi degildir");
    return 0;


}
