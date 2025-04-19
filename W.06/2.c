#include <stdio.h>

// Function to count character types
void count(char str[], int *alphabets, int *digits, int *specials) {
    *alphabets = *digits = *specials = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            (*alphabets)++;
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if (ch != '\n') { // ignore newline
            (*specials)++;
        }
    }
}

int main() {
    char str[100];
    int alphabets, digits, specials;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    count(str, &alphabets, &digits, &specials);

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}
