#include <stdio.h>
int main() {
    int r, c;
    printf("Enter no of rows: ");
    scanf("%d", &r);

    printf("Enter no of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if (r != c) {
        printf("Matrix is not skew-symmetric");
        return 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] != -arr[j][i]) {
                printf("Matrix is not skew-symmetric");
                return 0;
            }
        }
    }

    printf("Matrix is skew-symmetric");

    return 0;
}
