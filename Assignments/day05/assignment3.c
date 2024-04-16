/*
 print Sum of Even and  sum of odd values between 1 to 50
*/
#include<stdio.h>
int main()
{
    int i,n=50,evenSum=0,oddSum=0;
    for(int i=1;i<=n;i++)
    {
        if(i % 2 == 0)
            evenSum=evenSum+i;
        else 
            oddSum=oddSum+i;
    }
    printf("\neven sum is = %d",evenSum);
    printf("\nodd sum is = %d",oddSum);
    return 0;
}