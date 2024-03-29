// Description:
// In a family, the people are arranged in rows and columns. Male persons in the families are arranged in a row and females are arranged in a column. Find the eldest woman in each column. Write a program to find the maximum element in each column of the matrix.

// Input Format:
// The input consists of (m*n+2) integers. The first integer corresponds to m, the number of rows in the matrix, and the second integer corresponds to n, the number of columns in the matrix. The remaining integers correspond to the elements in the matrix. The elements are read in row-wise order, the first row first, then the second row, and so on.

// Output Format:
// Refer to the sample output for details.

// Sample Input:
// 3
// 2
// 4 5
// 6 9
// 0 3

// Sample Output:
// 6
// 9

// Input (stdin):
// 3
// 3
// 22 23 25
// 25 22 26
// 26 27 23

// Output (stdout):
// 26
// 27
// 26

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < n; j++) {
        int max = matrix[0][j];
        for (int i = 1; i < m; i++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
