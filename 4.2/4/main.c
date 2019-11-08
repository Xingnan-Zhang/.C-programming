#include <stdio.h>
#include <stdlib.h>
float calculate(int x);
int main()
{
    int a ;
    printf("please enter a\n");
    scanf("%d" , &a);
    printf("the result is %f" ,calculate(a));
    return 0;
}
float calculate(int x)
{
    float result ;
    result = (float) (x-1)/x;
    if (x<=2)
    {
        return 0.5;
    }
    else
    {
        return result + calculate(x - 1);
    }
}

