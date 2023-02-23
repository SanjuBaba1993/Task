#include<stdio.h>
#include<string.h>
#include<conio.h>
void main(){
    char Name[20],Surname[20];
    
    printf("\n Enter your Name : ");
    scanf("%s",Name);
    printf("\n Enter your Surname : ");
    scanf("%s",Surname);

    printf("\n Size of Name is :%d",strlen(Name));
    printf("\n The Full Name is :%s",strcat(Name,Surname));
    printf("\n The reverse  of Name is :%s",strrev(Name));

    strcpy(Name, Surname);
    printf("\n The Sirname copies in Name : %s",Name);

    if(strcpy(Name,Surname)==0)
    {
        printf("\n The Name and Surname is same \n");
    }
    else
    {
        printf("\n The Name and Surname is not same \n");
    }
}