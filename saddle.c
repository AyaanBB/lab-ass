 #include <stdio.h>


int main() {
    int i, j, k,n,r,s;
    
    n = 3;
    
    int a[n][n];

    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
     s = 0;
    for (i = 0; i < n; i++) {
        r = a[i][0];
        int c = 0;
        for (j = 1; j < n; j++) {
            if (a[i][j] < r) {
                r = a[i][j];
                c = j;
            }
        }

        s = 1;
        for (k = 0; k < n; k++) {
            if (a[k][c] > r) {
                s = 0;
                break;
            }
        }

        if (s) {
            printf("Saddle point found at position (%d, %d) with value %d\n", i,c,r);
            s = 1;
        }
    }

    if (!s) {
        printf("No saddle point found in the matrix\n");
    }

    return 0;
}
