#include<stdio.h>
#include<math.h>
 
int main(){
	double item,eps,pi;
	int denominator,flag;
	scanf("%lf",&eps);
	flag=1;
	pi=0;
	item=1.0;
	denominator=1;
	while(fabs(item)>=eps){
		pi=pi+item;    //�ۼӵ�i���ֵ
		flag=-flag;   //�ı����
		denominator=denominator+2;
        item=flag*1.0/denominator;
	}
    pi=pi+item;
	pi=pi*4;
	printf("Pi = %.4f",pi);
	return 0;
} 
