#include <stdio.h>

int main(){
    int stack[5];
    int top=-1;

    top++;
    stack[top]=10;

    top++;
    stack[top]=20;

    top++;
    stack[top]=30;
    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    printf("\nPopped element: %d\n", stack[top]);
    top--; 
     printf("Stack after pop:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }

    return 0;
}