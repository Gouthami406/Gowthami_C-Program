#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValid(char *s) {
    int len = strlen(s);
    char *stack = (char *)malloc(len + 1);
    int top = -1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else {
            if (top == -1) return 0;
            if ((s[i] == ')' && stack[top] != '(') ||
                (s[i] == '}' && stack[top] != '{') ||
                (s[i] == ']' && stack[top] != '[')) {
                return 0;
            }
            top--;
        }
    }

    return top == -1;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    if (isValid(s)) {
        printf("Valid string\n");
            } else {
                printf("Invalid string\n");
            }
            return 0;
        }


