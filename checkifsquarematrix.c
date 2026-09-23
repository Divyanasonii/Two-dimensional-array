#include<stdio.h>
int main () {
    int rows;
    printf("enter no of rows : ");
    scanf("%d", &rows);
    int columns;
    printf("enter no of columns : ");
    scanf("%d", &columns);
    int arr[rows][columns];
    printf("enter elements : \n");
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    if(rows==columns){
        printf("Given matrix is a square matrix");
    }
    else {
        printf("Given matrix is not a square matrix");
    }
    return 0;
}