#include<stdio.h>
int main()
{
    int tab=2, it;
    int prod=0;

    it=1;
start:
    prod = tab * it;
    printf("\n%d x %d = %d",tab,it,prod);
    it++;
    if(it<=10)
        goto start;
    printf("\n");
    return 0;

}