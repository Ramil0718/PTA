#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}


void hollowPyramid( int n ){
   int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(i==n) printf("%d",i);
            else{
                if(j==n-i+1) printf("%d",i);
                else if(j==n+i-1) printf("%d",i);
                else if(j<n-i+1||(j>n-i+1&&j<n+i-1)) printf(" ");
            }
        }
        printf("\n");
    }
}
