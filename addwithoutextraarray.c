#include<stdio.h>

int main() {
    int arr[2][2];
    int brr[2][2];

    printf("enter elements of first matrix : ");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("enter elements of second matrix : ");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // add brr into arr
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            arr[i][j] = arr[i][j] + brr[i][j];
        }
    }

    printf("sum of matrices : \n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}