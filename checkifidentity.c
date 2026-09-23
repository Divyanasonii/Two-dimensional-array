#include<stdio.h>
int main () {
    int arr[3][3];
    printf("enter elements : \n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int identity = 1;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(i ==j && arr[i][j]!= 1){
                identity = 0;
            }
            if(i !=j && arr[i][j]!= 0){
                identity = 0;
            }
        }
    }
    if(identity == 1){
        printf("identity matrix");
    }
    else {
        printf("Not an identity matrix");
    }
    return 0;
}