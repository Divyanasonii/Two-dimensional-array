#include<stdio.h>
int main () {
    int r;
    printf("enter no of rows : ");
    scanf("%d", &r);
    int c;
    printf("enter no of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("enter elements : ");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //wave print 
    for (int j = 0; j < 3; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 2; i >= 0; i--)
            {
                printf("%d", arr[i][j]);
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                printf("%d", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
