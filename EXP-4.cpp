#include <stdio.h>

int main() {
    char ch;
    int spaces = 0, newlines = 0;

    printf("Enter text to count spaces and newlines:\n");

    while ((ch = getchar()) != EOF) {

        if (ch == ' ')
            spaces++;

        if (ch == '\n')
            newlines++;
    }

    printf("\nWhitespaces Count = %d\n", spaces);
    printf("Newline Count = %d\n", newlines);

    return 0;
}

