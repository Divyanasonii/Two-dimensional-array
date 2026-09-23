#include<stdio.h>
int main () {
    int arr[2][2];
    printf("enter elements of first matrix : ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int brr[2][2];
    printf("enter elements of second matrix : ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &brr[i][j]);
        }
    }
    printf(" \n");
    int sum[2][2];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            sum[i][j]= arr[i][j]+ brr[i][j];
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", sum[i][j]);
        }
        printf(" \n");
    }
    return 0;
}