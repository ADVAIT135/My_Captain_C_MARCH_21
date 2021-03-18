/*Program to find the sum of digits of a number using recursion*/
#include<stdio.h>
int sum(int n);
int sum(int n){

    if (n==0){
        return 0;
    }
    return (n%10 + sum(n/10));
}
int main(){
    int n;
    printf("Enter the number whose sum of digits is to be found out: ");
    scanf("%d",&n);
    int result = sum(n);
    printf("Sum of digits of the entered number %d is %d",n,result);
    printf("\n");
    return 0;
}
