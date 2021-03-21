#include<stdio.h>
int main() {
    int arr[3][3];//Declaring array of 3x3

    int (*ptr)[3][3]; // Pointer to an array of 3x3 elements.

    int i=0,j=0;

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the value of [%d][%d] element in the array: ",i,j);

            scanf("%d",&arr[i][j]); // Taking 9 inputs from user.
        }
    }

    printf("\nThe Array is :-");

    ptr = &arr; // Points to the entire array.

    for (i=0;i<3;i++){
            printf("\n");
            for(j=0;j<3;j++){
                    printf("%d\t",(*ptr)[i][j]); // Printing the contents of array.
            }
    }
    printf("\n");
    int diagonal_sum = 0;

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(i==j){ // Checking for the diagonal positions i.e [0][0], [1][1], [2][2] ... [n][n]
                diagonal_sum = arr [i][j] + diagonal_sum;
                }
            }
        }

    printf("\nThe sum of the diagonal elements is : %d",(diagonal_sum)); //Printing the sum of the diagonal elements.
    printf("\n");
    return 0;
}
