#include<stdio.h>
int main () {
    int arr[4][4];
    printf("enter all elements : ");
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int maxcount = 0;
    int row = 0;

    for(int i = 0; i<4; i++){
        int count = 0;           // inside this loop count ko add kra becausenit has to reset
        for(int j = 0; j<4; j++){
            if(arr[i][j]==1)
            count++;
        }
        if(maxcount<count){
            maxcount = count;
            row = i;
        }
    }
    printf("row number with maximum ones : %d", row);
    printf("\nnumber of ones : %d", maxcount);
    return 0;
}