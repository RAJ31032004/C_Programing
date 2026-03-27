
////////////////////////////////////////////////////////
// Function Name: AddColumn
// Description: Accepts a matrix and its dimensions, and prints the sum of each column
// Input: 2D array (matrix), number of rows, number of columns
// Output: Sum of each column
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////#include<stdio.h>

void AddColumn(int Arr[][10], int iRow, int iCol)
{
    int i = 0, j = 0;
    int sum = 0;

    for(j = 0; j < iCol; j++)   // column loop
    {
        sum = 0;

        for(i = 0; i < iRow; i++)  // row loop
        {
            sum = sum + Arr[i][j];
        }

        printf("%d\t", sum);
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

    printf("Column sums are:\n");
    AddColumn(Arr, iRow, iCol);

    return 0;
}