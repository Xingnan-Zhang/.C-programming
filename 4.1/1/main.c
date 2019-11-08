#include <stdio.h>
#include <stdlib.h>

/*int gear(int ,int );
int guess(void);*/
int integerpower(int , int);

int main()
{
    int a ,  b , result;
    printf("please enter the base and exponent ");
    scanf("%d%d" , &a , &b);
    result = integerpower( a , b );
    printf("%d ^ %d is %d" ,a , b, result);
    return 0;
}
int integerpower(int c, int d)
{
    int power = 1 , n = 1 ;
    while (n<=d)
    {
        power = power * c;
        n++;
    }
    return power;
}
