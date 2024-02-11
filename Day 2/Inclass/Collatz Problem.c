// Description:
// Chander started working for Bing and he wanted him to write a program to generate Collatz Sequence. The rules for generating the Collatz sequence are: If n is even, n = n / 2. If n is odd, n = 3n + 1.
// For example, if the starting number is 5 the sequence is: 5 -> 16 -> 8 -> 4 -> 2 -> 1 It has been proved for almost all integers, that the repeated application of the above rule will result in a sequence that ends in 1.

// Input Format:
// The input is an integer 'n' which denotes the first term of the sequence.

// Output Format:
// As output, print the numbers in the sequence and also print the number of times the rule has to be applied in order to reach 1.

// Sample Input 0:
// 18

// Sample Output 0:
// 18
// 9
// 28
// 14
// 7
// 22
// 11
// 34
// 17
// 52
// 26
// 13
// 40
// 20
// 10
// 5
// 16
// 8
// 4
// 2
// 1
// 20

// Input (stdin):
// 1

// Output (stdout):
// 1
// 0

#include <stdio.h>
int main()
{
  int num, count = 0;
  scanf("%d", &num);
  printf("%d\n", num);
  while (num != 1)
  {
    if (num % 2 == 1)
      num = 3 * num + 1;
    else
      num = num / 2;
    printf("%d\n", num);
    count++;
  }
  printf("%d\n", count);
  return 0;
}