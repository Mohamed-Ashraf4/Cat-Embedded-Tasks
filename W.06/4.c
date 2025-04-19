#include <stdio.h>

// Function to find first occurrence of a character
int FirstOccurrence(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i; // where it's found
        }
    }
    return -1; // if not found
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to search: ");
    scanf(" %c", &ch);
    int index = FirstOccurrence(str, ch);

    if (index != -1) {
        printf("'%c' is found at index %d\n", ch, index);
    } else {
        printf("'%c' is not found in the string.\n", ch);
    }

    return 0;
}
