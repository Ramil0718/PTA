
#include <stdio.h>  
 
int main(){  
    int n;  
    scanf("%d", &n);  
    int i, j, mat[n][n];  
    
    for( i=0; i<n; i++ )  
        for( j=0; j<n; j++ )  
            scanf("%d", &mat[i][j]);  
    
    int k=0, y=0, flag=0, p=0;  
    
    if( n==1 )  
        printf("0 0");
    else{  
        for( i=0; i<n; i++ ){   
            y=i;  
            for( p=0; p<n; p++ )
                if( mat[i][k] <= mat[i][p] ) 
                    k=p;  
            
            for( j=0; j<n; j++ )
                if( mat[y][k] > mat[j][k] ){  
                    y=j;  
                    break;  
                }  
            
            if( i == y ){  
                flag=1;  
                break;  
            }  
        }  
        
        if( flag )  
            printf("%d %d", i, k);  
        else 
			printf("NONE");  
    }  
    return 0;  
} 
