#inclu**de<stdio.h>
int main()
{
   int i,n;
   int a[50]={1,1};
   scanf("%d",&n);
if(n>=1&&n<=46)
    {for(i=2;i<n;i++)
      a[i]=a[i-1]+a[i-2];
     for(i=0;i<n;i++)
     {
   printf("%11d",a[i]);
   if((i+1)%5==0)
       printf("\n");
  }
 }
else
   printf("Invalid.");
 
    return 0;
 }
