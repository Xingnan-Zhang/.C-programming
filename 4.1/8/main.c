#include <stdio.h>
#include <stdlib.h>
float qwe(float a,float b);
float wer(float a,float b);
float ert(float a,float b);
float rty(float a,float b);
int main()
{float a,b,c;
scanf("%f %f",&a,&b);
c=rty(ert(a,b)-qwe(a,b),wer(a,b));
printf("%f",c);
return 0;
}
float qwe(float a,float b)
{float result;
result=a+b;
return result;
}
float wer(float a,float b)
{float result;
result=a-b;
return result;
}
float ert(float a,float b)
{float result;
result=a*b;
return result;
}
float rty(float a,float b)
{float result;
result=a/b;
return result;
}
