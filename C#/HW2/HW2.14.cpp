#include <stdio.h>
int main()
{
    int n,sayi,bas,f,top;
    printf("bir sayi giriniz lutfen");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        top=0;
        sayi=i;
        while(sayi>0)
        {
            f=1;
            bas=sayi%10;
            for(int j=1;j<=bas;j++)
            {
                f*=j;
                
            }
            sayi=sayi/10;
            top+=f;
        }
        if(top==i)
            printf("\n%d",i);
    }
    return 0;
} 
