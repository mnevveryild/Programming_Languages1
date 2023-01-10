#include <stdio.h>
int main()
{
    float top;
    int sayi,i;
    printf("bir sayi giriniz lutfen");
    scanf("%d",&sayi);
    for(int i=1;i<=sayi;i++)
    {
        top+=(float)1/i;
    }
    printf("sonuc; %f",top);
    return 0;
}
