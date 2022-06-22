#include <stdio.h>
#define MAXN 10

void sort( int a[], int n ){
	int min_index;
	for(int i=0;i<n-1;i++){
		min_index=i;
		for(int j=i+1;j<n;j++){
			if(a[min_index]>a[j]) min_index=j;
		}
		if(min_index!=i){
			int temp=a[i];
			a[i]=a[min_index];
			a[min_index]=temp;
		}
	} 
}

int main()
{
    int i, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");
        
    return 0;
}

/* 你的代码将被嵌在这里 */

