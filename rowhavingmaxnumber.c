#include <stdio.h>
int main() {
    int arr[3][3];
    printf("enter elements of matrix : \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max;
    for(int i = 0; i<3; i++){
         max = arr[i][0];
        for(int j = 0; j<3; j++){
            if(max <arr[i][j]){
                max = arr[i][j];
            }
        }
        printf("Maximum element of row %d = %d\n", i +1,max);
    }
    
    return 0;
}