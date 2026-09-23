#include<stdio.h>
int main () {
    int r;
    printf("enter the no of rows : ");
    scanf("%d", &r);
    int c;
    printf("enter the no of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    int sum = 0;
    printf("enter elements of the matrix : ");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
          sum = sum + arr[i][i];
        }
    printf("Sum of main diagonal : %d ", sum);
    return 0;
}