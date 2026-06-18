/* Sonali Patil
   Date: 18 June 2026
   Description: This program is used to multiply two matrices of size 2x2.
*/
// This program is used to multiply two matrices. The user is prompted to enter the elements of two matrices, and the program calculates and displays the resulting matrix after multiplication.
#include<stdio.h>
int main()
{
    int i,j,k;
    int row1 =2,column1 = 2;
    int row2=2, column2 =2;
    int matrix1[5][5],matrix2[5][5];
    //Read matrix1
    printf("Please enter Matrix 1\n");
    for (i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            printf("Enter %d row & %d column element:",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    // Read matrix2  
    printf("\nPlease enter matrix 2\n");
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < column2; j++)
        {
        printf("Enter %d row & %d column element:",i,j);
        scanf("%d", &matrix2[i][j]);
        }
    }
    int matrix3[3][3];
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column2; j++)
        {
            matrix3[i][j] = matrix3[i][j]+(matrix1[i][k] * matrix2[k][j]);
        }
    }
    // print
    printf("Multiplication of Matrix 1 and Matrix 2 = \n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column2; j++)
        {
            printf("%d \t",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;

}