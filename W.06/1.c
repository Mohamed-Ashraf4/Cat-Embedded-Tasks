#include <stdio.h>

// Function to convert string to uppercase
void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}
