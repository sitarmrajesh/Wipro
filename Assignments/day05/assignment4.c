/*
Find out the sum of series   3+33+333+3333+33333+333333
*/
#include <stdio.h>
int main()
{
    int sum=0,i,n=6,x=3;
    printf("\n sum of the series ");
    for(i=0;i<n;i++)
    {
        sum=sum+x;
        printf("%d",x);
        x=x*10+3;
        if(i<5)
        {
            printf("+");
        }


    }
    printf("=%d",sum);
    return 0;
}
