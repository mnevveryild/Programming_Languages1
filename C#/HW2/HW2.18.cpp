#include <stdio.h>
int main()
{
    int deger;
    int i,j;
    printf("bir deger giriniz");
    scanf("%d",&deger);
    for(i=1;i<=deger;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((j+i)%2==0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}
