#include<stdio.h>
int main () {
    int r;
    printf("enter no of rows of 1st matrix : ");
    scanf("%d", &r);
    int c;
    printf("enter no of columns of 1st matrix : ");
    scanf("%d", &c);
   
    int m;
    printf("enter rows of second matrix : ");
    scanf("%d", &m);
    int n;
    printf("enter columns of second matrix : ");
    scanf("%d", &n);

    if(c != m){
        printf("Multiplication is not possible");
        return 0;
    }
    int res[r][n];

     int arr[r][c];
    printf("enter elements of 1st matrix : ");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[m][n];
    printf("enter elements of second matrix : ");
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &brr[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
      for(int j = 0; j<n; j++){
         res[i][j]= 0;
    for(int k = 0; k<m; k++){
        res[i][j] = res[i][j]+arr[i][k]*brr[k][j];
    }

      }
    }
    printf("Resultant matrix : \n");
    for(int i =0; i<r; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}