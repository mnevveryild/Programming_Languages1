#include <stdio.h>
int main ()
{
    int sayi1,sayi2,ekok=1,i;
    printf("iki adet sayý giriniz lutfen");
    scanf("%d%d",&sayi1,&sayi2);
    for(i=2;i<=sayi1 || i<=sayi2;i++)
    {
        if(sayi1%i==0 || sayi2%i==0)
            ekok*=i;
    }
    printf("%d",ekok);
    return 0;

}
