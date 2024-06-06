#include <stdio.h>


int main()
{
    int a;
    printf("Insert a number\n");// prompt user to insert a number
    scanf("%d", &a);// assign number to a
    if(a>0)
    {
        printf("The number is positive\n ");
    }
    else if(a<0)
    {
        printf("The number is negative\n");
    }
    else if(a==0)
    {
        printf("The number is zero\n");

    }
    return 0;
}
