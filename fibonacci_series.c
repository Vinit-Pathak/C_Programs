//fibonacci series using non-recursion
#include<stdio.h>

int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter the term : ");
    scanf("%d",&n);
    printf("Fibonacci series of first %d terms are : ",n);

for(int i=1; i<=n; i++)
    {
        printf(" %d",a);
        c = a+b;
        a = b;
        b = c;
    }
return 0;
}

//fibonacci series using recursion

int fibo(int val)
{
    if(val == 0)
        return 0;
    else if(val == 1)
        return 1;
    else
        return(fibo(val-1)+fibo(val-2));
}

int main()
{
    int n;
    printf("Enter the nth terms : ");
    scanf("%d",&n);
    printf("Fibonacci series of first %d terms are :- ",n);

    for(int i=0; i<n; i++)
        printf("%d ",fibo(i));
return 0;
}
