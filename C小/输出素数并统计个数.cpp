#include<stdio.h>
#include<math.h>

int prime( int p ){
    /*if(p%2==0) return 0;
    else return 1;*/
    int i,m;
	if(p<2) return 0;
    else if(p==2) return 1;
         else{
         for(i=2;i<=sqrt(p);i++)	//i<sqrt(m)
         if(p%i==0) return 0;
         return 1;
		 }
 } 


int main()
{
    int cnt, m, n, p;
    cnt = 0;
    scanf ( "%d %d", &m, &n );
    printf("Count of ( ");
    for ( p = m; p <= n; p++ ) {
        if ( prime ( p ) != 0 ){
            printf ( "%d ", p );
            cnt++;
        }
    }
    printf(") = %d\n", cnt);
    return 0;
}


/* 请在这里填写答案 */

