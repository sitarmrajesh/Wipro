/*
 program to print the pattern
 *
 **
 ***
 ****
 *****
 ****                                                                   
 ***                                                                  
 **                                                                    
 *   

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
            if(i == n-1 && j == n-1){}
            else
            {
                printf("\n");
            }
    }
    for(i=n;i>0;i--)
    {
        for(j=1;j<n;j++)
           if(i == j || i<=j)
            {
                printf(" ");
            } 
            else
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}