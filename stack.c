#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[max];
int top = -1;

int isFull() {
    if(top == max - 1) {
        return 1;
    }
    return 0;
}

int isEmpty() {
    if(top == -1) {
        return 1;
    }
    return 0;
}

void push(int data) {
    if(isFull()) {
        printf("Stack is full\n");
        return;
    }
    top = top + 1;
    stack[top] = data;
    printf("Data entered successfully\n");
}

int pop() {
    if(isEmpty()) {
        printf("Stack underflow\n");
        exit(1);
    }
    int value = stack[top];
    top--;
    return value;
}

void display() {
    if(top == -1) {
        printf("Empty stack\n");
        return;
    }
    printf("Stack elements are:\n");
    for(int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    while(1) {
        int choice;
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        int data;
        switch(choice) {
            case 1:
                printf("Enter data to be pushed: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                printf("%d popped from the stack\n", data);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}
