#include <stdio.h>
 
int main(){
    int n;
    
    do{
        scanf("%d", &n);
    }while( n<0 || n%2==0 );  // ȷ��n�ķ�Χ
    
    for( int i=n/2; i>=1; i-- ){  // ���ǰn/2��
        for( int j=1; j<=i; j++ ) // ����ո�
            printf("  ");
        for( int x=1; x<=n-2*i; x++ ) // ����Ǻ�
            printf("* ");
        putchar('\n');
    }
      
    for( int m=1; m<=n; m++ ) // �м���
        printf("* ");
    
    putchar('\n');
    
    for( int w=1; w<=n/2; w++ ){  // ���ʣ��n/2��
        for( int e=1; e<=w; e++ ) // ����ո�
            printf("  ");
        for( int r=1; r<=n-2*w; r++ ) // ����Ǻ�
            printf("* ");
        putchar('\n');
    }
    
    return 0;
}
