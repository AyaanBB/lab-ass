// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,n,m,max;
    
    scanf("%d",&m);
    scanf("%d",&n);
    
    int a[m][n];
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    
    a[i][0] = max;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("%d is max element at %d,%d", max,);
     
    return 0;
}