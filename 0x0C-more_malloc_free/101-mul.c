#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to check if a string consists of digits only
int isNumeric(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

// Function to multiply two positive numbers
int multiply(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98; // Indicate incorrect number of arguments
    }

    if (!isNumeric(argv[1]) || !isNumeric(argv[2])) {
        printf("Error\n");
        return 98; // Indicate non-numeric input
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 < 0 || num2 < 0) {
        printf("Error\n");
        return 98; // Indicate negative input (assuming positive numbers only)
    }

    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0; // Indicate success
}

