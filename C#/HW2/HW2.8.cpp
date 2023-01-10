#include <stdio.h>
int main ()
{
    int sayi,kontrol,toplam;
    printf("bir sayi giriniz lutfen");
    scanf("%d",&sayi);
    for(;sayi>2;sayi--)
    {
        kontrol=0;
        for(int i=2;i<sayi;i++)
        {
            if (sayi%i==0)
            {
                kontrol=1;
                break;
            }    
        }
        if  (kontrol==0)
            toplam=toplam+sayi;
    
    }
    if(sayi!=1)
        toplam=toplam+1;
        printf("%d",toplam);
    
    return 0;
}
