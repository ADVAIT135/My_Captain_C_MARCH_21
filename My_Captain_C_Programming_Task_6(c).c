/*Program to find the LCM of two numbers using recursion*/
#include<stdio.h>
int lcm_1(int, int);
int main()
{
    int a, b, result;
    printf("Enter 2 integers to find LCM of:-\n");
    printf("\nFirst number : ");
    scanf("%d",&a);
    printf("\nSecond number : ");
    scanf("%d",&b);
    result = lcm_1(a,b);
    printf("\nLCM of %d and %d is: %d\n", a, b, result);
    return 0;
}

int lcm_1(int a, int b)
{
    static int temp = 1;
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm_1(a,b);
        return temp;
    }

}
