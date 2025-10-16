/* 
Name: Shanawaz
UIN: 251C039
FIELD: Civil
Div: B
*/

#include <stdio.h>

int main() {
    int num1, num2, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Ensure num1 is less than num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        if (i % 2 != 0) {  // Check if i is odd
            sum += i;
        }
    }

    printf("Sum of odd numbers between %d and %d is: %d\n", num1, num2, sum);
    return 0;
}
