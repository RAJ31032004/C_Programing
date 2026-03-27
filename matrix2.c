////////////////////////////////////////////////////////
// Function Name: Frequency
// Description: Accepts a matrix, its dimensions, and a number, and returns the frequency of that number in the matrix
// Input: 2D array (matrix), number of rows, number of columns, number to search
// Output: Frequency of the specified number
// Author: Raj Samir Jadhav
// Date : 27/03/2026
////////////////////////////////////////////////////////
#include<stdio.h>

int Frequency(int Arr[][10], int iRow, int iCol, int iNo)
{
    int i = 0, j = 0;
    int count = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == iNo)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int Arr[10][10];
    int iRow = 0, iCol = 0;
    int i = 0, j = 0;
    int iNo = 0;
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

    printf("Enter number to search: ");
    scanf("%d", &iNo);

    iRet = Frequency(Arr, iRow, iCol, iNo);

    printf("Frequency of %d is: %d\n", iNo, iRet);

    return 0;
}