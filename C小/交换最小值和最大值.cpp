#include <stdio.h>
int main()
{
    int N,a[10],max,min,t,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
          min=a[0];max=a[0];
    for(i=1;i<N;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(i=1;i<N;i++)
    {
       if(a[i]<min)
            min=a[i];
    }
    
    for(i=0;i<N;i++)
        if(a[i]==min)
        {
           t=a[0];
            a[0]=a[i];
            a[i]=t;
        }
        for(i=0;i<N;i++)
    {
        if(a[i]==max)
        {
            
             t=a[N-1];
            a[N-1]=a[i];
            a[i]=t;
        }
    }
    
    for(i=0;i<N-1;i++)
        printf("%d ",a[i]);
        printf("%d ",a[N-1]);
    return 0;
}
