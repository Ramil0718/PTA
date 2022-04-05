#include<stdio.h>
int main()
{
    int i=1;
    double eps,pi=1,item=1.0;
    scanf("%le", &eps);
    while(item>=eps){
        item=1.0;
        for(int j=1;j<=i;j++)
            item=item*j/(2*j+1);
        pi=pi+item;
        i++;
    }
    printf("PI = %.5lf",2*pi);
}

