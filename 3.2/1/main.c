#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=20 ;
    /*while (x>=-10)
    {
        printf("%d,",x);
        x -= 6;
    }*/
    /*for (;x>=-10;x-=6)
    {
        printf("%d,",x);
    }*/
    do
    {
        printf("%d,",x);
        x-=6;
    }
    while (x>=-10);
    return 0;
}
