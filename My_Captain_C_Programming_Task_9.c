#include<stdio.h>
#include<string.h>
int main(){

    char a[80];
    printf("Enter the string to reverse : ");
    gets(a); //Taking User input
    FILE *fp;
    fp = fopen("Input-String.txt","w"); //Making a new file named Input-String to store the text entered by the user
    fprintf(fp,"%s",a); //Storing the input given by the user
    fclose(fp); //Closing the file
    printf("\n");
    fp = fopen("Input-String.txt","r");
    printf("The input string is :%s",a); //Printing the content which is entered by the user and is stored in the Input-String file
    fclose(fp); //Closing the file
    printf("\n");
    fp = fopen("Reverse-of-the-Input-String.txt","w"); //Making a new file named Reverse-of-the-Input-String to the reverse of the content entered and stored in the Input-String File
    fprintf(fp,"%s",strrev(a)); //Storing the reverse of the input
    printf("\nThe reverse of the entered input string is: %s",a);//Printing the reverse of the file
    fclose(fp);//Closing the file
    printf("\n");
    return 0;

}
