#include <stdio.h>
void main()
{
    int a[2][3];
    int b[2][3];
    int c[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nenter value of a=");
            scanf("\n%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nenter value of b=");
            scanf("\n%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Your Output of Addition is \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("\t%d", c[i][j]);
        printf("\n");
    }
}