#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , x = 1 , y = 1 ,z=0;
    printf("please enter a number\n");
    scanf("%d", &n);
    while (x<=n)
    {
        y = y * x;
        x++;
        z = z + y;
    }
    printf("%d",z);

    return 0;
}
