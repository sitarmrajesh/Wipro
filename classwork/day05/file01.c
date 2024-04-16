#include <stdio.h>
 int main()
 {
    int a,b;
    char ch;
    char name[20];
    //scanf("%c",&ch)
    scanf("%d%d%s",&a,&b,&name[0]);
    printf("\nch: %d=%c",ch,ch);
    getchar();

    scanf("%c",&ch);
    printf("\nValues Scanned\n");
    printf("\n%d\t%d\t%s\t%c",a,b,name,ch);
    printf("\nch : %d=%c",ch,ch);
    printf("\n\n");
    return 0;
 }