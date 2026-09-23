#include<stdio.h>
int main () {
    int arr[2][2];
    printf("enter elements of array : ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int max = arr[0][0];

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    printf("largest element of array : %d", max);
    printf("\n");
    printf("index of the element : ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
        if(arr[i][j]==max){
            printf("[%d][%d]", i, j);
        }
        }
    }
   
    return 0;
}