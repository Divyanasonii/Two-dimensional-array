#include<stdio.h>
int main () {
    int r;
    printf("enter no of rows : ");
    scanf("%d", &r);
    int c;
    printf("enter no of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    int sum;
    printf("enter elements : ");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum = sum + arr[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}