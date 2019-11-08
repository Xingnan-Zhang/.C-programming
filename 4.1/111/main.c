#include <stdio.h>
#include <stdlib.h>
int main()
{int m;int a;
scanf("%d",&a);
m=abc(a);
if(m!=1)printf("%d is a prime",a);
return 0;
}
int abc(a)
{int k=2;
int b;
while(k<a)
{
if(a%k==0)b=1;
k++;
}
return b;
}
