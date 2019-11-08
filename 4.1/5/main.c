#include <stdio.h>
#include <stdlib.h>
int main(void)
{int score;
int a,b,c;float m;
int i=1;
while(i<=5)
{scanf("%d %d %d",&a,&b,&c);
score=abcd(a,b,c);
m=m+score;
printf("%d",score);
i++;}
m/=5;
printf("%f",m);
return 0;
}
int abcd(int a,int b,int c)
{int d;
d=0.15*a+0.25*b+0.5*c;
return d;
}
