#include <stdio.h>
#include <string.h>

#define MAX 100

char queue[MAX];
int front = 0;
int rear = -1;

char stack[MAX];
int top = -1;

void enqueue(char c) {
    queue[++rear] = c;
}

char dequeue() {
    return queue[front++];
}

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int isPalindrome(char str[]) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        enqueue(str[i]);
        push(str[i]);
    }

    for (int i = 0; i < len; i++) {
        if (dequeue() != pop()) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}