#include <stdio.h>
void matrixDivision(const int mat1[3][3], const int mat2[3][3], int result[3][3]);
void displayMatrix(const int mat[3][3]);
int main()
{
    int arr1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

    int arr2[3][3] = {{9, 8, 7},
                     {6, 5, 4},
                     {3, 2, 1}};
    int result[3][3];
    matrixDivision(arr1, arr2, result);
    printf("Result of matrix division:\n");
    displayMatrix(result);
    return 0;
}
void matrixDivision(const int mat1[3][3], const int mat2[3][3], int result[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] / mat2[i][j];
        }
    }
}
void displayMatrix(const int mat[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

