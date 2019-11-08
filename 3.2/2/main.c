#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m = 1 ,r = 1;
    printf("please enter a number ");
    scanf("%d",&n);
    do
    {
        r = r * m;
        m++;
    }
    while (m<=n);
    printf("%d! is %d\n",n , r);

    return 0;
}
