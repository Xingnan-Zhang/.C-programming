#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 1 , dai, me ,fe , score , average;
    while (n<=5)
    {
    printf("please enter the score\ndaily ");
    scanf("%f", &dai);
    printf("mid-exam ");
    scanf("%f", &me);
    printf("final exam ");
    scanf("%f", &fe);
    score = dai*0.15 + me*0.25 + fe*0.6;
    printf("the final score is %f\n", score);
    average = average + score*0.2;
    n++;
    }
    printf("the average score is %f \n", average);
    return 0;
}
