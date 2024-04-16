/*
 program to print rectangle  triangle star pattern
*/
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n value: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           if(i == j || i>=j)
            {
                printf("*");
            } 
            else
            {
                printf(" ");
            }
        printf("\n");
    }
    return 0;
}