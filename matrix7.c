////////////////////////////////////////////////////////
// Function Name: ReverseRow
// Description: Accepts a matrix and its dimensions, and reverses each row
// Input: 2D array (matrix), number of rows, number of columns
// Output: Matrix with each row reversed
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////
#include<stdio.h>

void ReverseRow(int Arr[][10], int iRow, int iCol)
{
    int i = 0, start = 0, end = 0;
    int temp = 0;

    for(i = 0; i < iRow; i++)
    {
        start = 0;
        end = iCol - 1;

        while(start < end)
        {
            temp = Arr[i][start];
            Arr[i][start] = Arr[i][end];
            Arr[i][end] = temp;

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

    ReverseRow(Arr, iRow, iCol);

    printf("Matrix after reversing rows:\n");
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