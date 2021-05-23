#include <stdio.h>
#include <math.h>

void bubblesort(int** arr, int col, int row ) {

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                if (arr[i, j] < arr[i, k])
                {
                    int tmp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = tmp;
                }
            }
        }
    }
}
void Trabbo(double* arr)

{
    double result;
    int i;
    for (i = 10; i >= 0; i--)
    {
        result = sqrt(fabs(arr[i])) + 5.0 * pow(arr[i], 3.0);
        if (result > 400.0)
        {
            printf("%d too large\n", i);
        }
        else
        {
            printf("%d %f\n", i, result);
        }
    }
}

int main(int argc, char* argv[]) {
    int arr1[3][3] = {
        {2,3,1},
        {5,6,4},
        {7,8,9}
    };
    bubblesort(arr1,3,3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    }

    double arr2[11];
    printf("¬ведите 11 чисел:");
    for (int i = 0; i < 11; i++) {
        scanf_s(arr2[i]);
    }
    Trabbo(arr2);
    return 0;
}