// Description:
// Mr. Bean has saved an image in a 2D array and he wants to rotate the image by 90 degrees in clockwise direction. Please help him code for array rotation by 90 degrees in clockwise direction.

// Input Format:
// The first line contains the size of the matrix N. The next N lines contain the elements of the matrix

// Output Format:
// The output prints the rotated matrix

// Sample Input 1:
// 3
// 1 2 3
// 4 5 6
// 7 8 9

// Sample Output 1:
// 7 4 1
// 8 5 2
// 9 6 3

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  int matrix[n][n];
  
  // Read the matrix elements from the input
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &matrix[i][j]);
  
  // Print the rotated matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j >= 0; j--)
      printf("%d ", matrix[j][i]);
    printf("\n");
  }
  return 0;
}
