#include <stdio.h>
#define ROWS 3
#define COLS 3
void matrixinput(int mat[][COLS]) // to scan the input from the user
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
           scanf("%d", (*(mat + i) + j));//&a[i][j]
        }
    }
}
void matrixprint(int mat[][COLS])//to print the output
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
           printf("%d ", *(*(mat + i) + j));//-->a[i][j]
        }
        printf("\n");
    }
}
void matrixadd(int mat1[][COLS], int mat2[][COLS], int res[][COLS])
                                            // to add the two 2d matrices
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
           *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
             // res[i][j] = mat1[i][j] + mat2[i][j]   
        }
    }
}
int main()
{
    int m1[ROWS][COLS], m2[ROWS][COLS], res[ROWS][COLS];
    printf("Enter elements in first matrix of size %dx%d: \n", ROWS, COLS);
    matrixinput(m1);                           // Input elements in first matrix
    printf("\nEnter elemetns in second matrix of size %dx%d: \n", ROWS, COLS);
    matrixinput(m2);                           //Input element in second matrix
    matrixadd(m1, m2, res);                  // Finc sum of both matrices and print result
    printf("\nSum of first and second matrix: \n");
    matrixprint(res);                           //funtion to print output
    return 0;
}
