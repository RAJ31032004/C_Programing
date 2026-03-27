////////////////////////////////////////////////////////
// Function Name: Transpose
// Description: Accepts a matrix and its dimensions, and returns the transpose of the matrix
// Input: 2D array (matrix), number of rows, number of columns
// Output: Transpose of the matrix
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////
#include<stdio.h>

void Transpose(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i < iCol; i++)
    {
        for(j = 0; j < iRow; j++)
        {
            printf("%d\t", Arr[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int Arr[10][10];
    int iRow = 0, iCol = 0;
    int i = 0, j = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iRow);

    printf("Enter number of columns: ");
    scanf("%d", &iCol);

    printf("Enter matrix elements:\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    printf("Transpose of matrix:\n");
    Transpose(Arr, iRow, iCol);

    return 0;
}