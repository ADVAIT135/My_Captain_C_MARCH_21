/*My Captain task 2,C program for swapping values*/

#include<stdio.h>
#include<conio.h>
int main(){
    printf("Enter two numbers:-");
    int x=0,y=0,a=0;
    printf("\n\nEnter First number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    printf("\nValues of two numbers before swapping:-");
    printf("\nFirst number : %d",x);
    printf("\nSecond number: %d",y);
    printf("\n\nValues of two numbers after swapping:-");
    a=y;
    y=x;
    x=a;
    printf("\nFirst number: %d",x);
    printf("\nSecond number: %d",y);
    getch();
    return 0;
}


