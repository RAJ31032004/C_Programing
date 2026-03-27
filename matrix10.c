////////////////////////////////////////////////////////
// Function Name: ChkSparse
// Description: Accepts a matrix and its dimensions, and checks if it is a sparse matrix
// Input: 2D array (matrix), number of rows, number of columns
// Output: TRUE if it is a sparse matrix, FALSE otherwise
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkSparse(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;
    int zeroCount = 0, nonZeroCount = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == 0)
            {
                zeroCount++;
            }
            else
            {
                nonZeroCount++;
            }
        }
    }

    if(zeroCount > nonZeroCount)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int Arr[10][10];
    int iRow = 0, iCol = 0;
    int i = 0, j = 0;
    BOOL bRet = FALSE;

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

    bRet = ChkSparse(Arr, iRow, iCol);

    if(bRet == TRUE)
    {
        printf("Matrix is Sparse\n");
    }
    else
    {
        printf("Matrix is NOT Sparse\n");
    }

    return 0;
}