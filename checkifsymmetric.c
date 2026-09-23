#include<stdio.h>
int main () {
    int r;
    printf("enter no of rows : ");
    scanf("%d", &r);
    int c;
    printf("enter no of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter elements :\n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    if(r!=c){
        printf("Not a symmetric matrix");
        return 0;
    }
    for(int i = 0; i<r; i++){
        for(int j= 0; j<c; j++){
            if(arr[i][j]!= arr[j][i]){
                printf("Not a symmetric matrix");
                return 0;
            }
        }
    }
    printf("Symmetric matrix");

    return 0;
}