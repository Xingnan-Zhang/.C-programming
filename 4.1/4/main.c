#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ;
    float result;
    printf("please enter two numbers ");
    scanf("%d%d", &a ,&b);
    result =  (a*b-(a + b))/(a-b);
    printf("%f", result);
    return 0;
}
