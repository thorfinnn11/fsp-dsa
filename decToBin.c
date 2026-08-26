#include <stdio.h>
#include <stdlib.h>

#define MAX 64

int stack[MAX];
int top = -1;

void push(int bit) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = bit;
}

int pop() {
    if (top == -1) {
        return -1;
    }
    return stack[top--];
}

void decToBin(int n) {
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    int temp = n;
    while (temp != 0) {
        push(temp % 2);
        temp /= 2;
    }

    printf("Binary of %d: ", n);
    while (top != -1) {
        printf("%d", pop());
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    decToBin(num);

    return 0;
}