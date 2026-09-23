#include<stdio.h>
int main () {
    int n;
    printf("enter the no of rows and columns : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("enter the elements : ");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
//transpose
    for(int i = 0;i<n; i++){
        for(int j = 0; j<i; j++){
            int temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i]= temp;
        }
    }
    //rotate
    for(int i = 0; i<n; i++){
        int j = 0;
        int k = n -1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j]= arr[i][k];
            arr[i][k]= temp;
            j++;
            k--;
        }
    }
    //print
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    