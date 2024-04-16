/*
        Write a c program to print alphabet triangle.
Input: 5
Output:

         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
*/
#include <stdio.h>
int main()
{
    int n,i,j;
    char x;
    printf("enter the n value: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        x='A';
        for(j=0;j<=i*2;j++)
        {
            printf("%c",x);
            if(j<i)
            {
                x++;
            }
            else
                x--;
        }
        printf("\n");
    }
    return 0;
}