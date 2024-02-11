// Description:
// Write a program to print an inverted right-angled triangle in a star pattern.

// Input Format:
// Input consists of one integer that corresponds to the number of pattern rows.

// Output Format:
// Output prints the inverted right-angled triangle star pattern.

// Sample Input 0:
// 10

// Sample Output 0:

// **********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main()
{
  int num, i, j;
  scanf("%d", &num);
  
  for(i = num; i > 0; i--)
  {
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
  
  return 0;
}
