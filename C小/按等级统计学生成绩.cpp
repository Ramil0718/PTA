#include <stdio.h>
#define MAXN 10

struct student
{
    int num;
    char name[20];
    int score;
    char grade;
};

int set_grade( struct student *p, int n )
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(p[i].score<60)
		{
			count++;
		}
		if(p[i].score<60)
		{
			p[i].grade='D';
		}
		else if(60<=p[i].score&&p[i].score<=69)
		{
			p[i].grade='C';
		}
		else if(70<=p[i].score&&p[i].score<=84)
		{
			p[i].grade='B';
		}
		else if(85<=p[i].score&&p[i].score<=100)
		{
			p[i].grade='A';
		}
	}
	return count;
}

int main()
{   struct student stu[MAXN], *ptr;
    int n, i, count;
    
    ptr = stu;
    scanf("%d\n", &n);
    for(i = 0; i < n; i++){
       scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
    } 
   count = set_grade(ptr, n);
   printf("The count for failed (<60): %d\n", count);
   printf("The grades:\n"); 
   for(i = 0; i < n; i++)
       printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

