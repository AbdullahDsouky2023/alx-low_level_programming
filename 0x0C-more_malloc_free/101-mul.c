#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isNumeric(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    int num1, num2, result;
    if (argc != 3) {
        printf("Error\n");
        return 98; 
    }

    if (!isNumeric(argv[1]) || !isNumeric(argv[2])) {
        printf("Error\n");
        return 98; 
    }

     num1 = atoi(argv[1]);
     num2 = atoi(argv[2]);

    if (num1 < 0 || num2 < 0) {
        printf("Error\n");
        return 98; 
    }

     result = multiply(num1, num2);
    printf("%d\n", result);

    return 0; 
}

