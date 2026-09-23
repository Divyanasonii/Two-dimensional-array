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
    int min = arr[0][0];

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    printf("largest element of array : %d", min);
    printf("\n");

     printf("index of the element : ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
        if(arr[i][j]==min){
            printf("[%d][%d]", i, j);
        }
        }
    }
   
    return 0;
}