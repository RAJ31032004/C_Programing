////////////////////////////////////////////////////////
// Function Name: MaxDiagonal
// Description: Accepts a matrix and its dimensions, and returns the maximum element from both diagonals
// Input: 2D array (matrix), number of rows, number of columns
// Output: Maximum element from both diagonals
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////
#include<stdio.h>

int MaxDiagonal(int Arr[][10], int iRow, int iCol)
{
    int i = 0;
    int max = Arr[0][0];

    for(i = 0; i < iRow && i < iCol; i++)
    {
        // Primary diagonal
        if(Arr[i][i] > max)
        {
            max = Arr[i][i];
        }

        // Secondary diagonal
        if(Arr[i][iCol - 1 - i] > max)
        {
            max = Arr[i][iCol - 1 - i];
        }
    }

    return max;
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

    iRet = MaxDiagonal(Arr, iRow, iCol);

    printf("Maximum from both diagonals: %d\n", iRet);

    return 0;
}