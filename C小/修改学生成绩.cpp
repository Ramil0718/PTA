
#include <stdio.h>
struct student{       /*ѧ����Ϣ�ṹ����*/
  int num;            /* ѧ�� */
  char name[10];      /* ���� */
  int math, english, computer;   /* ���ſγ̳ɼ� */
}; 
int update_score(struct student *p, int n, int num, int course, int score) /*��������*/
{
	int N=0;
	int flag=0;
	scanf()
}

int main(void)
{    
  int i, pos, n, num, course, score;
  struct student students[50];   /* ����ṹ���� */
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &students[i].num);
    scanf("%s", students[i].name); 
    scanf("%d", &students[i].math); 
    scanf("%d", &students[i].english); 
    scanf("%d", &students[i].computer);
  }

  /* ������޸�ѧ����Ϣ */
  scanf("%d", &num);
  scanf("%d", &course);
  scanf("%d", &score);

  /*���ú������޸�ѧ���ɼ�*/
  pos = update_score(students, n, num, course, score);

  /*����޸ĺ��ѧ����Ϣ*/
  if(pos == -1)
    printf("Not found!\n");
  else
  {  printf("%d,%d,%d,%d\n", students[pos].num, students[pos].math, students[pos].english, students[pos].computer);
  }

  return 0;
}

/* ����������д�� */

