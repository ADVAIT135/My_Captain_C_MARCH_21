/*My Captain Task 3, C program to display grade of a student based on his/her marks*/

#include<stdio.h>
#include<conio.h>
int main(){
    int m;
    printf("Enter the marks scored by student:- ");
    scanf("%d",&m);
    if((m>=85)&&(m<=100)){
        printf("GRADE A");
    }
    else if((m>=70) && (m<=84)){
        printf("GRADE B");
    }
    else if((m>=55)&&(m<=69)){
        printf("GRADE C");
    }
    else if((m>=40)&&(m<=54)){
        printf("GRADE D");
    }
    else{
        printf("GRADE F");
    }
    getch();
    return 0;

}
