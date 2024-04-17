/*
Find a partition point in array
Given an unsorted array of integers.
Find an element such that all the elements to its left are smaller and
to its right are greater. Print -1 if no such element exists.
Note that there can be more than one such elements.
For example an array which is sorted in increasing order
all elements follow the property. We need to find only one such element.

*/

#include <stdio.h>
int main()
{
    int n,A[10],i,k;
    int key;
    printf("enter the size of the array: ");
    scanf("%d",&n);

    printf("\nEnter the elements in the array: ");
    for(i=0;i<n;i++)
    {
            scanf("%d",&A[i]);
    }

    for(k=0;k<n;k++)
    {
        key = -1;
        for(i=0;i<k;i++)
        {
            if(A[i]>= A[k])
                break;
        }
        if(i != k)
            continue;
        for(i=k+1;i<n;i++)
        {
            if(A[i] <= A[k])
                break;
        }

        if(i == n)
        {
            key = A[k];
            break;
        }

    }
    printf("%d",key);
    return 0;
}
