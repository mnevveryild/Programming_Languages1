#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    int delta,x1,x2;
    printf("denklemin katsayý degerlerini sýrasýyla giriniz lutfen");
    scanf("%d%d%d",&a,&b,&c);
    delta=b*b-4*a*c;
    	if(delta<0)
        printf("gercek kok yoktur");
    	else if(delta==0)
        {
            delta=sqrt(delta);
            a=(a<0)? -a:a;
            x1=(-b-delta)/2*a;
            printf("denklemin koku cift katlý kok %d",x1);
        }
    	else
        {
            delta=sqrt(delta);
            a=(a<0)? -a:a;
            x1=(-b-delta)/2*a;
            x2=(-b+delta)/2*a;
            printf("denklemin iki gercek koku var %d,%d",x1,x2);
        }
    return 0;


}
