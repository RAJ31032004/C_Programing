////////////////////////////////////////////////////////
// Function Name: AddDiagonal
// Description: Accepts a matrix and its dimensions, and returns the sum of the diagonal elements
// Input: 2D array (matrix), number of rows, number of columns
// Output: Sum of diagonal elements
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////
#include<stdio.h>

int AddDiagonal(int Arr[][10], int iRow, int iCol)
{
    int i = 0;
    int sum = 0;

    for(i = 0; i < iRow && i < iCol; i++)
    {
        sum = sum + Arr[i][i];
    }

    return sum;
}

int main()
{
    int Arr[10][10];
    int iRow = 0, iCol = 0;
    int i = 0, j = 0;
    int iRet = 0;

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

    iRet = AddDiagonal(Arr, iRow, iCol);

    printf("Sum of diagonal elements: %d\n", iRet);

    return 0;
}