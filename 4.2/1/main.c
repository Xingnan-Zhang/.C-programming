#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a , b , div1 , div2 , n , l , s;
    printf("please enter two numbers ");
    scanf("%f%f" , &a ,&b );
    if (a<=b)
    {
        n = a ;
    }
    else
    {
        n = b ;
    }
    while(n>=0)
    {
        div1 = a / n ,div2 = b / n ;
        if(div1 == floor(div1) && div2 == floor(div2))
        {
            printf("the GCD of %f and %f is %f\n" , a ,b ,n);
            break;
        }
        n--;
    }
    printf("the LCM is %f\n" , l = n * div1 * div2);
    printf("LCM - GCD equal to %f" , s = l - n);
    return 0;
}
