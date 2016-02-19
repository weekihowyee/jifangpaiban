#include<stdio.h>
#include<stdlib.h>

#define MAXPRESS 3
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define LEN sizeof(struct Node) //NodeµÄ´óÐ¡

typedef int Status;

typedef  struct Node
{
    int worknum;
    int lesson_table[7][5];
    int work_table[7][5];
    int press;
    int tmp[7];
    struct Node *Next;
}Node;

typedef struct Node *Linklist;

int l1[7][5]={{1,0,1,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1}};
int l2[7][5]={{1,0,1,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1}};
int l3[7][5]={{1,0,1,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1}};

int *lesson_sour(int i)
{
    int (*arr_t)[5];
    switch(i)
    {
    case 1:
        {
            arr_t=l1;
            return arr_t;
            break;
        }
    case 2:
        {
            arr_t=l2;
            return arr_t;
            break;
        }
    case 3:
        {
            arr_t=l3;
            return arr_t;
            break;
        }
    }
}

Status init_test(Linklist L)
{
    int (*arr_t)[5],i,j,k;
    Linklist p1,p2;
    p2=L;
    for(i=0;i<3;i++)  //test mode
    {
       p1=(Linklist) malloc(LEN);
       arr_t=lesson_sour(i+1);
       p1->worknum=i+1;
       p1->press=0;
        for(j=0;j<7;j++)
            for(k=0;k<5;k++)
                {
                     p1->lesson_table[j][k]=arr_t[j][k]; //test mode
                }
        for(j=0;j<7;j++)
            for(k=0;k<5;k++)
                {
                     p1->work_table[j][k]=0;
                }
                for(j=0;j<7;j++)
                    p1->tmp[j]=0;
        p2->Next=p1;
        p2=p1;
    }

    p2->Next=p1;
        p2=p1;
    p2->Next=NULL;

    return OK;
}

Status Show_Link_lesson(Linklist L)
{
    int i,j,k;
    Linklist p;
    p=L->Next;
    while(p!=NULL)
    {
        printf("\n");
         for(j=0;j<7;j++)
         {
            for(k=0;k<5;k++)
            {
                printf("%d\t",p->lesson_table[j][k]);
            }
             printf("\n");
         }
        p=p->Next;
    }
    printf("\n");
    return OK;
}

Status pb_test(int (*p)[5],Linklist L,int i,int j)
{
    int flag=1;
    Linklist t;
    t=L->Next;
    while(flag)
    {
        if(t->lesson_table[i][j]==0 && t->tmp[i]==0 && t->press<=MAXPRESS)
        {
            *(*(p+i)+j)=t->worknum;
            t->work_table[i][j]=1;
            t->tmp[i]=1;
            t->press++;
            flag=0;
        }
        t=t->Next;
        if(t==NULL)
            flag=0;
    }
    return OK;
}

Status pb_print(int (*p)[5])
{
    int i,k,j;
    printf("this week !:\n");
    for(j=0;j<7;j++)
         {
            for(k=0;k<5;k++)
            {
                printf("%d\t",p[j][k]);
            }
             printf("\n");
         }
}

void main()
{
    Linklist L;
    int j,k;
    int pb[7][5];
    L=(Linklist)malloc(LEN);
    init_test(L);
    Show_Link_lesson(L);
    for(j=0;j<7;j++)
            for(k=0;k<5;k++)
                pb_test(pb,L,j,k);
    pb_print(pb);
}




