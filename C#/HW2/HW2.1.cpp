#include <stdio.h>
int main()
{
    int kenar1,kenar2,alan,cevre;
    printf("dikdortgenin kenar uzunluklarýn giriniz lutfen");
    scanf("%d",&kenar1);
    scanf("%d",&kenar2);
    alan=kenar1*kenar2,
    cevre=(kenar1+kenar2)*2;
    printf("diktortgenin alani; %d\ncevresi; %d",alan,cevre);
    return 0;
}
