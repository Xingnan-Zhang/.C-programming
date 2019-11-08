#include <stdio.h>
#include <stdlib.h>

int integerPower(int c , int d)
{
    if(d<=1)
    {
        return c;
    }
    else
    {
        return c * integerPower( c , d - 1);
    }
}
int main()
{
    int a , b ;
    printf("please enter two numbers\n");
    scanf("%d%d", &a , &b);
    printf("%d ^ %d is %d\n" , a , b ,integerPower(a , b));
    return 0;
}
