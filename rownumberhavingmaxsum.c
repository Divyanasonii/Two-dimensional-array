#include <stdio.h>
int main() {
    int arr[3][3];
    printf("enter elements of matrix : ");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxsum = 0;
    int row = 0;

    for(int i = 0; i<3; i++){
        int sum = 0;

        for(int j = 0; j<3; j++){
            sum = sum + arr[i][j];
        }

        if(sum > maxsum){
            maxsum = sum;
            row = i;
        }
    }
    printf("maximum sum : %d", maxsum);
    printf("\n");
    printf("row number having max sum : %d", row);
    return 0;
}