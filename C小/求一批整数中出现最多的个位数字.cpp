
#include <stdio.h>
 
int main(){
    // gewei:用于取个位数  shu[10]:设置一个数组用于存放个位数出现的个数
    int N, i, gewei, shu[10] = {0};    
    
    scanf("%d", &N);
    
    int nums[N];
    
    for( i=0; i<N; i++ ){
        scanf(" %d", &nums[i]);
        int x = nums[i];
        while( x != 0 ){
            gewei = x % 10;
            switch( gewei ){
                case 0: 
                    shu[0]++;
                    break;
                case 1: 
                    shu[1]++;
                    break;
                case 2: 
                    shu[2]++;
                    break;
                case 3: 
                    shu[3]++;
                    break;
                case 4: 
                    shu[4]++;
                    break;
                case 5: 
                    shu[5]++;
                    break;
                case 6: 
                    shu[6]++;
                    break;
                case 7: 
                    shu[7]++;
                    break;
                case 8: 
                    shu[8]++;
                    break;
                case 9: 
                    shu[9]++;
            }
            x /= 10;
        }
    }
    
    int max = shu[0];
    
    for( i=1; i<10; i++ ) // 取最大次数
        if( max < shu[i] )
            max = shu[i];
    
    printf("%d:", max);
    
    for( i=0; i<10; i++ )
        if( max == shu[i] )
            printf(" %d", i);
    
    return 0;
}
