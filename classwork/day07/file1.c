/*
demo on pointers
*/
#include <stdio.h>
int main()
{
    int qty=100;
    char c = 'A';
    float f = 10.5;
    double  d = 101.22;

    void *ptr;

    printf("\nAddress of qty = %u and its value = %d",&qty,qty);
    printf("\nAdress of ch = %u and its value = %c",&c,c);
    printf("\nAddress of f = %u and its value = %f",&f,f);
    printf("\nAdress of d = %u and its value = %lf",&d,d);
    
    printf("\n\n");


    ptr = &qty;
    printf("\nAdress of qty = %u and its value = %d",&qty,qty);
    printf("\nAdress of qty = %u and its value = %u",&ptr,ptr);

    printf("\nvalue of qty using ptr=%d",*(int*)ptr);
    printf("\n\n");

    /*   ptr = &c;
    printf("\nAdress of ch = %u and its value = %c",&c,c);
    printf("\nAdress of ptr = %u and its value = %u",&ptr,ptr);
    printf("\n\n");

       ptr = &f;
    printf("\nAdress of f = %u and its value = %f",&f,f);
    printf("\nAdress of ptr = %u and its value = %u",&ptr,ptr);
    printf("\n\n");

       ptr = &d;
    printf("\nAdress of d = %u and its value = %lf",&d,d);
    printf("\nAdress of ptr = %u and its value = %u",&ptr,ptr);
    printf("\n\n");

    */
    return 0;
}