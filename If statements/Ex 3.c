#include <stdio.h>

int main()
{
    int a;

    //prommt user to enter a number
    printf("Insert a number\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("The number is even");
    }
    else if(a%2==1)
    {
        printf("The number is odd ");
    
    }
    return 0;
    

}
