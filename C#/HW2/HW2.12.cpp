#include <stdio.h>
int main ()
{
    int sayi,n,i;
    printf("lutfen bir sayi giriniz");
    scanf("%d",&sayi);
    for (;sayi>0;sayi--)
    {
        n=sayi;
        int top=0;
        for(int i=1;i<sayi;i++)
        {
            if(sayi%i==0)
                top+=i;
        }
        if(top==sayi)
            printf("\n%d ",sayi);
        
    }
    return 0;
}


