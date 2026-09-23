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
    int column = 0;

    for(int j = 0; j < 3; j++) {
        int sum = 0;

        for(int i = 0; i < 3; i++) {
            sum = sum + arr[i][j];
        }

        if(sum > maxsum) {
            maxsum = sum;
            column = j;
        }
    }

    printf("column having maximum sum : %d", column);
    printf("\nmaximum sum : %d", maxsum);

    return 0;
}