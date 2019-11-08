#include <stdio.h>
#include <stdio.h>
int integerPower(const int n,int k)
{
static int num=1;
num=num*n;
if(k>1)
{
k--;
integerPower(n,k);
}
return num;
}
int main()
{
int n=0;
int k=0;
int ret=0;
scanf("%d %d",&n,&k);
ret=integerPower(n,k);
printf("%d\n",ret);
return 0;
}
