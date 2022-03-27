#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
using namespace std;
bool juge(int num);
int main(){
	int n;
	cin>>n;
//	for(int i=1;i<=(pow(2,n)-1);i++){
//		bool j = juge(i);
//		if(j&&(pow(2,n)-1)==i){
//			cout<<i<<endl;
//		} 
//	}
	bool ok=false;
	for(int i=2;i<=n;i++){
		if(juge((pow(2,i)-1))){
			cout<<(pow(2,i)-1)<<endl;
			ok=true;
		}
	}
	if(!ok)cout<<"None"<<endl;
	return 0;
}
bool juge(int num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

