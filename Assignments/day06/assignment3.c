/*
Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an
 array is a position such that the sum of elements before it is equal to
  the sum of  elements after it.
*/

#include <stdio.h>
int main()
{
    int N,A[10],i;
    int left=0,sum=0;
    printf("enter the size of the array: ");
    scanf("%d",&N);

    printf("\nEnter the elements in the array: ");
    for(i=0;i<N;i++)
    {
         scanf("%d",&A[i]);
         sum+=A[i];
    }
    printf("sum = %d\n",sum);

    for(i=0;i<N;i++)
    {
        sum -= A[i];
        if(left == sum)
          printf("%d",i);
        left += A[i];
    }
    
    return -1;
}
