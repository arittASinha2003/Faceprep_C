// Harry Potter

// Having crossed the three-headed faun, Harry, Dumbledore, and Snape went through a secret trap door in search of the Sorcerer's tomb. On the way, they passed through a room and found that the room has only one door opposite to them, and the door through which they entered shut once they entered the room. The door was very large with a four-digit number imprinted on it. When Harry and Dumbledore tried to open it by casting out spells, it didn't open. Having tried various spells, both got fed up and left the task to Snape. Snape curiously observing the room found that a statement was written on the top of the room. It was written as follows "I will be always four" “I can only be opened when you add my first and last digit and enter it” and “If you find a sign, you should not consider it” help Snape break the code and open the door so that they can save the Sorcerer's tomb.

// Input Format:
// Input consists of an integer which is a four-digit number present on the door.

// Output Format:
// The output is a single integer.

// Sample Input 1: 
// 1001 

// Sample Output 1: 
// 2

// Sample Input 2: 
// 1110 

// Sample Output 2: 
// 1

#include <stdio.h>

int main() {
    int num, first, last;

    scanf("%d", &num);

    last = num % 10;
    first = num / 1000;

    int sum = first + last;

    printf("%d\n", sum);

    return 0;
}