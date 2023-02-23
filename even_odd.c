#include<stdio.h>
void main(){
    int a, i;
    printf("a is:");
    scanf("%d",&a);

    printf("even number is:");
    
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
        printf("\n%d",i);
    }
}
 printf("odd number is:");

    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
        printf("\n%d",i);
    }
}
}
