#include<bits/stdc++.h>
using namespace std ;

int a[17900],n,b[17900],c[17900];
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	c[1]=1;
	for(int i=1;;i++){
		a[i]=a[i-1],a[i]+=b[i-1],b[i]=c[i-1],c[i]=a[i];
		c[1]=1;
		if((a[i]+b[i]+c[i])>=n){
			cout<<i<<endl;
			return 0;
		}
	}
}
//别看了，我问的竞赛同学，我也不会ORZ 
