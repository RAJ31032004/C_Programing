////////////////////////////////////////////////////////
// Function Name: ReverseCol
// Description: Accepts a matrix and its dimensions, and reverses each column
// Input: 2D array (matrix), number of rows, number of columns
// Output: Matrix with each column reversed
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////

#include<stdio.h>

void ReverseCol(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;
    int start = 0, end = 0;
    int temp = 0;

    for(j = 0; j < iCol; j++)
    {
        start = 0;
        end = iRow - 1;

        while(start < end)
        {
            temp = Arr[start][j];
            Arr[start][j] = Arr[end][j];
            Arr[end][j] = temp;

            start++;
            end--;
        }
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

    ReverseCol(Arr, iRow, iCol);

    printf("Matrix after reversing columns:\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}