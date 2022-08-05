#include<stdio.h>

int main()
{
    int a,b;
    char choice;


    printf("\nEnter Your choice\n");
    printf("+ for Addition\n- for Subtraction\n* for Multiplication\n/ for Division\n\n");
    scanf("%c", &choice);

    printf("Your Choice is : %c",choice);

    printf("\n\nEnter two values a & b : ");
    scanf("%d %d", &a,&b);

    switch (choice)
    {
    case '+': 
        printf("%d + %d = %d\n", a,b,(a+b));
        break;
    case '-': 
        printf("%d - %d = %d\n", a,b,(a-b));
        break;
    case '*': 
        printf("%d * %d = %d\n", a,b,(a*b));
        break;
    case '/': 
        if(b!=0)
            printf("%d / %d = %d\n", a,b,(a/b));
        else
            printf("Number can't be divided by 0\n");
        break;
    
    default:
        printf("You entered wrong choice!!!\n");
        break;
    }

    return 0;
}
