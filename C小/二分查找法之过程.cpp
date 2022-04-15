#include<stdio.h>

int BinSearch(int a[],int n,int x){
	int left=0,right=n-1,mid;  //下标从0开始
	while(left<=right){
		mid=(left+right)/2;
		printf("[%d,%d][%d]\n",left,right,mid);
		if(a[mid]==x)
			return mid;
		else if(a[mid]<x) left=mid+1;
		else right=mid-1;
	}
	return -1;
}

int main()
{
	int n,x,flag=1,ans;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
			printf("Invalid Value");
			flag=0;
			break;  //注意这里的break 
		}
	}
	if(flag){
		ans=BinSearch(a,n,x);
		if(ans==-1) printf("Not Found");
		else printf("%d",ans);
	}
	return 0;
}
