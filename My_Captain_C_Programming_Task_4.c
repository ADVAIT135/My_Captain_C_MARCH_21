/*Switch case or Menu Driven program in which the user is asked for food item number as an input and then he/she is asked whether he/she wants to order again
or not*/

#include<stdio.h>
int main(){
    int choice;
    int order_again;
    do{
    printf("\n Welcome to Advait's food corner. \n What you wanna have today?");
    printf("\n Select from the menu given below:-");
    printf("\n 1.Paneer Chilly,Rs 155");
    printf("\n 2.Crisspy Paneer,Rs 160");
    printf("\n 3.Paneer 65,Rs 155");
    printf("\n 4.Veg Spring Roll,Rs 150");
    printf("\n 5.Veg Lolly Pop,Rs 160");
    printf("\n 6.Veg Machurian,Rs 145");
    printf("\n Enter the food item number that you wanna have:- ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("\nFood Item - Paneer Chilly \nPrice - Rs 155");
        break;
    case 2:
        printf("\nFood Item - Crisspy Paneer \nPrice - Rs 160");
        break;
    case 3:
        printf("\nFood Item - Paneer 65 \nPrice - Rs 155");
        break;
    case 4:
        printf("\nFood Item - Veg Spring Roll \nPrice - Rs 150");
        break;
    case 5:
        printf("\nFood Item - Veg Lolly Pop \nPrice - Rs 160");
        break;
    case 6:
        printf("\nFood Item - Veg Manchurian \nPrice - Rs 145");
        break;
    default:
        printf("\nPlease select proper food item number and try again.");
     }
    printf("\nDo you wanna order again?");
    printf("\nIf Yes enter 1 else enter 0: ");

    scanf("%d",&order_again);
    if(order_again==0){
        break;
    }
    }while(order_again == 1);




    return 0;
}
