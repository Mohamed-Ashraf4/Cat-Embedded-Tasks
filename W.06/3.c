#include <stdio.h>
#include <string.h> 

// Function to reverse the string
void reverse(char str[]) {
    int len = strlen(str);

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverse(str);

    return 0;
}
