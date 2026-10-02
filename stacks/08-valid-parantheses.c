#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if brackets are valid
bool isValid(char* s) {
    int n = strlen(s);
    char stack[n];   // stack to hold opening brackets
    int top = -1;    // stack pointer

    for (int i = 0; i < n; i++) {
        char c = s[i];

        // If opening bracket, push onto stack
        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else {
            // If stack is empty, invalid
            if (top == -1) return false;

            // Check matching bracket
            char topChar = stack[top--];
            if ((c == ')' && topChar != '(') ||
                (c == ']' && topChar != '[') ||
                (c == '}' && topChar != '{')) {
                return false;
            }
        }
    }

    // If stack is empty at the end, it's valid
    return top == -1;
}

int main() {
    char s[1000]; // buffer for input string

    printf("Enter a string of brackets: ");
    scanf("%s", s);

     if (isValid(s)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}