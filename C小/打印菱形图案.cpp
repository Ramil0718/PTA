#include <stdio.h>
 
int main(){
    int n;
    
    do{
        scanf("%d", &n);
    }while( n<0 || n%2==0 );  // 确保n的范围
    
    for( int i=n/2; i>=1; i-- ){  // 输出前n/2行
        for( int j=1; j<=i; j++ ) // 输出空格
            printf("  ");
        for( int x=1; x<=n-2*i; x++ ) // 输出星号
            printf("* ");
        putchar('\n');
    }
      
    for( int m=1; m<=n; m++ ) // 中间行
        printf("* ");
    
    putchar('\n');
    
    for( int w=1; w<=n/2; w++ ){  // 输出剩下n/2行
        for( int e=1; e<=w; e++ ) // 输出空格
            printf("  ");
        for( int r=1; r<=n-2*w; r++ ) // 输出星号
            printf("* ");
        putchar('\n');
    }
    
    return 0;
}
