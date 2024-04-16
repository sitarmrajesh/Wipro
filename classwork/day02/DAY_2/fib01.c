//Fib Series using recurssion

#include <stdio.h>

int FS(int,int, int);

int main()
{
    int i=0,v1=0,v2=1,Fb=0,n;

    printf("\nEnter the nth Number: ");
    scanf("%d",&n);
    printf("\nFib Series of %dth Number is\n",n);
    printf("%d ",v2);
    /*while(i<n)
    {
        Fb = v1+v2;
        v1 = v2;
        v2 = Fb;
        printf("%d ",Fb);
        i++;
    }
    */
    FS(v1,v2,n);
    printf("\n\n");
    return 0;
}
int FS(int a1,int a2,int n)
{
    int Fb;
    if (n==0)
    {
        return 1;
    }
    Fb = a1+a2;
    printf("%d ",Fb);
    a1 = a2;
    a2 = Fb;
    n=n-1;
    FS(a1,a2,n);
}
