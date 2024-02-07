// Write a program to print the details of a student. The student's details consist of his/her name, age, CGPA, and grade.

// Input Format:
// The input consists of one string, one integer, one float, and one character.
// The string corresponds to the name of a student.
// The integer corresponds to the age of a student.
// The float corresponds to the CGPA of a student.
// The character corresponds to the grade of a student.

// Output Format:
// The output prints all the details of a student.
// Refer to the sample Output.

// Note: The CGPA (float value) should be printed with 2 decimal places.

// Sample Input 1:
// Rajeev
// 20
// 8.6467
// B

// Sample Output 1:
// Name: Rajeev
// Age: 20
// CGPA: 8.64
// Grade: B

// Sample Input 2:
// Meera
// 18
// 9.123
// A

// Sample Output 2:
// Name: Meera
// Age: 18
// CGPA: 9.12
// Grade: A

#include <stdio.h>
#include <math.h>
int main()
{
  int age;
  float cgpa;
  char name[50];
  char grade;
  
  scanf("%s", name);
  scanf("%d", &age);
  scanf("%f", &cgpa);
  scanf(" %c", &grade);
  
  printf("Name: %s", name);
  printf("\nAge: %d", age);
  //printf("\nCGPA: %.2f", cgpa);
  printf("\nCGPA: %.2f", floor(cgpa * 100) / 100);
  printf("\nGrade: %c", grade);
  return 0;
}
