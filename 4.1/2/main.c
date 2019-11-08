#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int x , n = 2, div;
    printf("please enter a number ");
    scanf("%d" , &x);
    while (n<x)
    {
        div = x/n;
        if (x==div*n)
        {
            printf("%d is not a prime number\n" , x);
            break;
        }
        n++;
    }
    if(x == 1 || x == n)
    {
        printf("%d is a prime number\n" , x);
    }
    return 0;
}*/
int define(int x);
int main()
{
    int y = 1 , d;
    while (y < 10000)
    {
        d = define(y) ;
        if(d == 1)
        {
            printf("%d  ", y);
        }
        y ++;
    }
    return 0;
}
int define(int x)
{
    int  n = 2, div;
    while (n<x)
    {
        div = x/n;
        if (x==div*n)
        {
            return 0;
            break;
        }
        n++;
    }
    if(x == 1 || x == n)
    {
       return 1;
    }

}
