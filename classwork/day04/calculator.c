/*
    program to use Airthmetic operators
*/
#include<stdio.h>
int main(){
    int res=0,val1=0,val2=0;
    printf("\n Enter the values of val1 and val2: ");

    scanf("%d %d",&val1,&val2);

   /* printf("enter operator: ");
     scanf("%c",&c);
     switch(c)
    */
    printf("\n Addition is =%d", val1 + val2 );

    printf("\n Subtraction is =%d ", val1 - val2 );

    printf("\n multiplication is =%d", val1 * val2 );

    printf("\n Division is =%d ", val1 / val2 );
    return 0;
}