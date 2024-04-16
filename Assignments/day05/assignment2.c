/*
Print series 1, 2, 4, 8, 16, 32, 64. given n = 64
*/
#include <stdio.h>
int main()
{
    int i,n=64;
    for(i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            printf("%d,",i);
        }
    }
    return 0;
}