#include <stdio.h>
#include <stdlib.h>

int num1 = 1;
int num2 = 2;
int num3 = 3;
int num4 = 4;
int num5 = 5;
int num6 = 6;
int num7 = 7;
int num8 = 8;

int stack(int x) {
    printf("Address of Stack is %p\n",(void*)&x);
    if (x == 0) return 0;
    return stack(x - 1);
}

int main() {
    int* i1 = (int*)malloc(sizeof(int));
    int* i2 = (int*)malloc(sizeof(int));
    int* i3 = (int*)malloc(sizeof(int));
    int* i4 = (int*)malloc(sizeof(int));
    int* i5 = (int*)malloc(sizeof(int));
    int* i6 = (int*)malloc(sizeof(int));
    int* i7 = (int*)malloc(sizeof(int));
    int* i8 = (int*)malloc(sizeof(int));

    stack(7);

    printf("------------------------------------\n");

    printf("Address of Heap is %p\n", (void*)i1);
    printf("Address of Heap is %p\n", (void*)i2);
    printf("Address of Heap is %p\n", (void*)i3);
    printf("Address of Heap is %p\n", (void*)i4);
    printf("Address of Heap is %p\n", (void*)i5);
    printf("Address of Heap is %p\n", (void*)i6);
    printf("Address of Heap is %p\n", (void*)i7);
    printf("Address of Heap is %p\n", (void*)i8);

    printf("------------------------------------\n");

    printf("Address of Global Variable is %p\n", (void*)&num1);
    printf("Address of Global Variable is %p\n", (void*)&num2);
    printf("Address of Global Variable is %p\n", (void*)&num3);
    printf("Address of Global Variable is %p\n", (void*)&num4);
    printf("Address of Global Variable is %p\n", (void*)&num5);
    printf("Address of Global Variable is %p\n", (void*)&num6);
    printf("Address of Global Variable is %p\n", (void*)&num7);
    printf("Address of Global Variable is %p\n", (void*)&num8);

    free(i1);
    free(i2);
    free(i3);
    free(i4);
    free(i5);
    free(i6);
    free(i7);
    free(i8);

    return 0;
}