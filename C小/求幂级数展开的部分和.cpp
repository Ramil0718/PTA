#include<stdio.h>
#include<math.h>

double fac(int a){
	double result=1;
	if(a==0||a==1) result=1;
	else  while(a>1){
		result*=a;
		a=a-1;

}
return result;}

int main(){
	double x;
    double sum=1,factor;
    int y=1;
	scanf("%lf",&x);
do{
factor=pow(x,y)/fac(y);
sum+=factor;
y++;
	}while(factor>=0.00001);
sum+=pow(x,y)/fac(y);

printf("%.4f",sum);
return 0;
}

