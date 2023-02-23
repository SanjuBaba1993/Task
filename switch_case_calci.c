#include<stdio.h>
void main(){
    int a, b, n;
    printf("enter a number:");
    scanf("%d", &n);

    printf("press 1 for addition\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multification\n");

    printf("enter a value of a:");
    scanf("%d",&a);
    printf("enter a value of b:");
    scanf("%d",&b);

    switch(n)
    {
    case 1:
    printf("addition is %d",a+b);
    break;
    case 2:
    printf("substraction is %d",a-b);
    break;
    case 3:
    printf("multification is %d",a*b);
    break;
    default:
    printf("not valid");
    break;

}
}