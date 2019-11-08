#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,s;
    printf("please enter 10 integers\n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    s = a+b+c+d+e+f+g+h+i+j;
    printf("the summation of the 10 integers is %d",s);
    return 0;
}
