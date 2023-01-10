#include <stdio.h>
/*mukemmel sayý=kendisi haric pozitif bolenleri tolamýna esit olan sayý*/
int main ()
{
    int sayi,n,top=0;
    printf("sayi giriniz");
    scanf("%d",&sayi);
    n=sayi;
    for(int i=1;i<sayi;i++)
    {
        if(sayi%i==0)
            top+=i;

    }
    if(top==n)
        printf("mukemmel sayi");
    else
        printf("mukemmel sayi degil");
    return 0;
}


