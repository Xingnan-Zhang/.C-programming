#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1 , x2 , y1 , y2 , d ;
    printf("please enter the first point\n");
    scanf("%f%f" , &x1 ,&y1);
    printf("please enter the second point\n");
    scanf("%f%f" , &x2 , &y2);
    d = sqrt(
             pow( x1 - x2 , 2) + pow(y1 - y2 , 2));
    printf("the distance between the two point is %f\n", d);
    return 0;
}
