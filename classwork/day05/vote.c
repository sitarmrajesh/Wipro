#include <stdio.h>
 int main()
 {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) 
        printf("Invalid age\n");
    /*else
        {
            if(age <18 )
            {
                printf("you are a minor\n");
                printf("not eligible to vote.\n");
            }
            else 
            {
                if(age >= 18 && age <= 65 )
                {
                    printf("you are an adult\n");
                    printf("you are eligible to vote\n");
                }
                else
                {
                    printf("you are an senior citizen\n");
                    printf("you are eligible to vote\n");
                }
            }
        }    
    */

     else if (age < 18) 
        printf("You are a minor. Not eligible to vote.\n");
     else if (age >= 18 && age <= 65) 
        printf("You are an adult. You are eligible to vote.\n");
     else 
        printf("You are a senior citizen. You are eligible to vote.\n");
    

    return 0;

 }