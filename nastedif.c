#include<stdio.h>
void main()
{  
     int a, b, c;
    printf("enter a value a:");
    scanf("%d", &a);
    printf("enter a value b:");
    scanf("%d", &b);
    printf("enter a value c:");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)

    {
            printf("a is greater");
    }
    
    else
    {
        printf("c is greater");
    }
    }
    else  if (b > c)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
       
}
