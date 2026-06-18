// This program is used to subtract two matrices of size 2x2
#include<stdio.h>
int main()
{
    int i,j,row =2, column =2;
    int matrix1[3][3],matrix2[3][3];
    //Read matrix1
    printf("Please enter Matrix 1\n");
    for (i = 0; i < row; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("Enter %d row & %d column element:",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    // Read matrix2  
    printf("\nPlease enter matrix 2\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
        printf("Enter %d row & %d column element:",i,j);
        scanf("%d", &matrix2[i][j]);
        }
    }
    int matrix3[3][3];
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    // print
    printf("Subtraction of Matrix 1 and Matrix 2 = \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d \t",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;

}