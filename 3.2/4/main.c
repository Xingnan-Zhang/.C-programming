#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y=1 , z = 0;
    printf("please enter a number ");
    scanf("%d",&x);
    int a = x;
    while (x > 0)
    {
        y = x % 10;
        z = z *10 + y;
        x = x/10;
    }
    if (z==a)
    {
        printf("%d is a palindrome number\n" , a);
    }
    else
    {
        printf("%d is not a palindrome number\n" , a);
    }
    return 0;
}
