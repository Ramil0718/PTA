# include <stdio.h>
# include <math.h>

int is_triangle(double a, double b, double c)/* �ж�a,b,c�������ܷ񹹳�һ�������� */
{
    if(a+b>c&&a+c>b&&b+c>a)
	{
        return 1;
    }
    else
        return 0;
}

double area(double a, double b, double c)/* ������������� */
{
    double s,area;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
}

int main (void)
{
    double a1, a2, a3, a4, a5, a6, a7, result;
    
    scanf("%lf%lf%lf%lf%lf%lf%lf", &a1, &a2, &a3, &a4, &a5, &a6, &a7);
    if( is_triangle(a1, a5, a6) != 0 && is_triangle(a4, a6, a7) != 0 && is_triangle(a2, a3, a7) != 0){
        result = area(a1, a5, a6) + area(a4, a6, a7) + area(a2, a3, a7);
        printf("%.2f\n", result) ;
    }else{
        printf("These sides do not correspond to a valid pentagon\n");
    }
    
    return 0;
}

/* ����������д�� */

