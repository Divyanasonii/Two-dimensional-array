#include<stdio.h>
int main () {
    int arr[3][3];
    printf("enter elements : ");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Diagonal of this matrix :\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", arr[i][i]);
            break;
        }
    }
    return 0;
}