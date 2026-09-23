#include<stdio.h>
int main () {
    int r;
    printf("enter the no of rows : ");
    scanf("%d", &r);
    int c;
    printf("enter the no of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("enter elements of the matrix : ");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Secondary diagonal of this matrix are :\n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
           if(i + j == c - 1){
            printf("%d ", arr[i][j]);
           }
        }
    }
    return 0;
}