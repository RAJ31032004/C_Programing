////////////////////////////////////////////////////////
// Function Name: ChkIdentity
// Description: Accepts a matrix and its dimensions, and checks if it is an identity matrix
// Input: 2D array (matrix), number of rows, number of columns
// Output: TRUE if it is an identity matrix, FALSE otherwise
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkIdentity(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;

    // Check square matrix
    if(iRow != iCol)
    {
        return FALSE;
    }

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                if(Arr[i][j] != 1)
                {
                    return FALSE;
                }
            }
            else
            {
                if(Arr[i][j] != 0)
                {
                    return FALSE;
                }
            }
        }
    }

    return TRUE;
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

    bRet = ChkIdentity(Arr, iRow, iCol);

    if(bRet == TRUE)
    {
        printf("It is an Identity Matrix\n");
    }
    else
    {
        printf("It is NOT an Identity Matrix\n");
    }

    return 0;
}