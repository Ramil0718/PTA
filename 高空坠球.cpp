#include <stdio.h>
double rebound(long height,long n){
	if(n==1)
	return 0.5*height;
	else if(n==0){
		double a=0;
		return a;
	}
	else
	return 0.5*rebound(height,n-1);
} //����һ���������ݹ���㷴���߶� 

int main(){
	long height,n;
	double dis,bounce; //dis=distance����
	scanf("%ld %ld",&height,&n);
	if(n==1)
	dis=height;
	else if(n==0)
		dis=0;
	else {
		dis=height;
		for(int i=2;i<=n;i++){	
		dis=dis+2*rebound(height,i-1);
		}
	}
	printf("%.1f %.1f",dis,rebound(height,n)); 
}

