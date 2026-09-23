#include<stdio.h>
int main () {
    int r;
    printf("enter no of rows : ");
    scanf("%d", &r);
    int c;
    printf("enter no of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("enter elements : \n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int even = 0;
    int odd = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(arr[i][j]%2==0){
              even++;
            }
            if(arr[i][j]%2 !=0){
               odd++;
            }
        }
    }
    printf("No of even elements : %d\n", even);
    printf("No of odd elements : %d\n", odd);

    return 0;

}