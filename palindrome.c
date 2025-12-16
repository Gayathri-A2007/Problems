#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder, original_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num; // Store the original number for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;           // Extract the last digit
        reversed_num = reversed_num * 10 + remainder; // Build the reversed number
        num /= 10;                      // Remove the last digit
    }

    // Check if the original and reversed numbers are equal
    if (original_num == reversed_num) {
        printf("%d is a palindrome number.\n", original_num);
    } else {
        printf("%d is not a palindrome number.\n", original_num);
    }

    return 0;
}