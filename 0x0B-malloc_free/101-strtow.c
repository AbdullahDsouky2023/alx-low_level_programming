#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_words_length(char *str) {
    int i = 0;
    int words = 0;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            words++;
            while (str[i] != ' ' && str[i] != '\0') {
                i++;
            }
        } else {
            i++;
        }
    }

    return words;
}

int *get_word_length(char *str, int wordsCount) {
    int *counts = (int *)malloc(sizeof(int) * wordsCount);
    if (counts == NULL) {
        fprintf(stderr, "Memory allocation failed for counts.\n");
        exit(1);
    }

    int i = 0;
    int length = strlen(str);
    int wordIndex = 0;

    while (i < length) {
        if (str[i] != ' ') {
            counts[wordIndex] = 0;

            while (str[i] != ' ' && str[i] != '\0') {
                counts[wordIndex]++;
                i++;
            }

            wordIndex++;
        } else {
            i++;
        }
    }

    return counts;
}

char **separate_string(char *str, int wordsCount, int *counts) {
    int i = 0;
    int wordIndex = 0;
    int count = 0;
    int length = strlen(str);

    char **arr = (char **)malloc(sizeof(char *) * (wordsCount + 1));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed for arr.\n");
        exit(1);
    }

    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            if (count == 0) {
                arr[wordIndex] = (char *)malloc(sizeof(char) * (counts[wordIndex] + 1));
                if (arr[wordIndex] == NULL) {
                    fprintf(stderr, "Memory allocation failed for arr[%d].\n", wordIndex);
                    exit(1);
                }
            }

            arr[wordIndex][count] = str[i];
            count++;

            if (str[i + 1] == ' ' || str[i + 1] == '\0') {
                arr[wordIndex][count] = '\0';
                wordIndex++;
                count = 0;
            }
        }
    }

    return arr;
}

char **strtow(char *str) {
    int wordsCount = get_words_length(str);

    if (wordsCount == 0) {
        return NULL;
    }

    int *counts = get_word_length(str, wordsCount);
    char **arr = separate_string(str, wordsCount, counts);

    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed for arr.\n");
        exit(1);
    }

    arr[wordsCount] = NULL;

    return arr;
}
