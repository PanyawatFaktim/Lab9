#include <stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main() {
    int a = 1, b = 2, c = 3;
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int i;
    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After swap function: a=%d, b=%d, c=%d\n", a, b, c);
    printf("\nBefore swap array\n");
    for(i=0;i<5;i++)
        printf("%d ",arr1[i]);
    printf("\n");
    for(i=0;i<5;i++)
        printf("%d ",arr2[i]);
    swapArray(arr1, arr2, 5);
    printf("\n\nAfter swap array\n");
    for(i=0;i<5;i++)
        printf("%d ",arr1[i]);
    printf("\n");
    for(i=0;i<5;i++)
        printf("%d ",arr2[i]);
    return 0;
}

void swapValue(int *a, int *b, int *c){
    int temp;
    temp = *c;
    *c = *a;
    *a = *b;
    *b = temp;
}
void swapArray(int a[], int b[], int size){
    int i, temp;
    for(i = 0; i < size; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
