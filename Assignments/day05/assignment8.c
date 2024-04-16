/*
    Write the logic to for incrementing Squared Number-Star Pattern.
    Sample Output:
    1*2*3*4*5
    6*7*8*9*10
    11*12*13*14*15
    16*17*18*19*20
    21*22*23*24*25
*/
#include<stdio.h>
int main()
{
    int n,i,j,x=1;
    printf("Enter n value: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",x);
            if(j<n)
            {
                printf("*");
            }
            x++;
        }
        printf("\n");
    }
    return 0;
}