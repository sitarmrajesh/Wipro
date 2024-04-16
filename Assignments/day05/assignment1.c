/*
   Print series 0,3,8,15,24,35,48,63,80,99 given n = 10
*/

#include <stdio.h>
 int main()
 {
    int i=2,n=0,odd,res;
    printf("0,");
    while(n<9)
    {
        odd=((2*i)-1);
        printf("%d",res+odd);
        if(n<8)
        {
            printf(",");
        }
        res=res+odd;
        i++;
        n++;
    }
    return 0;
 }