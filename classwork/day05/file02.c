#include<stdio.h>
int main()
{
    char ch;
    printf("enter the charcater:\n");
    scanf("%c",&ch);
     switch(ch)
     {
        case 'a':
              {  
                printf("a\n");
                break;
              }
        case 'b':
              {  
                printf("b\n");
                break;
              }
        case 'c':
              {  
                printf("c\n");
                break;
              }
        default:
              {
                printf("default\n");
              }
        
     }
     return 0;
}