
#include<stdio.h>
 
int main()
{
    int m=0,n=0;
    int arr[20][21];
    arr[20][20]=0;
    scanf("%d%d",&m,&n);
    
    //����
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    //����ʱ�ж�
    for(int i=1;i<m-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(arr[i][j]>arr[i][j-1]&&arr[i][j]>arr[i][j+1]&&arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i+1][j])
            {
                printf("%d %d %d\n",arr[i][j],i+1,j+1);
                arr[20][20]=1;
            }
        }
    }
    
    //����޾ֲ�����ֵ�������Ӧ����
    if(arr[20][20]==0)
    {
        printf("None %d %d",m,n);
    }
    return 0;
}
