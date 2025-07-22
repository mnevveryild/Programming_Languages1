#include <stdio.h>
int main()
{
    int n,top=0,sonuc;
    printf("bir sayi giriniz lutfen");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        int ust=1;
        for(int k=1;k<=i;k++)
        {
            ust*=n;
        }
        top+=ust;
        sonuc=n-top;
    }
    printf("%d",sonuc);
    return 0;
}
