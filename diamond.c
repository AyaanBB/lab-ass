// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k,n;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j <= i + (n-1) && j >= (n+1) - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=(2*n)-1;j>=1;j--)
        {
            if(j >= (n+1) - i && j <= i + (n-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}