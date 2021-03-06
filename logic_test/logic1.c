#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXPRESS 3
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define LEN sizeof(struct Node) //Node�Ĵ�С

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

int l1[7][5]={{1,0,1,0,1},{1,1,0,1,1},{0,0,0,0,1},{0,1,1,0,1},{0,1,0,1,1},{0,1,1,0,1},{0,1,0,1,1}};
int l2[7][5]={{1,0,1,0,0},{0,1,0,1,1},{1,1,0,0,1},{1,0,0,0,1},{0,1,1,0,1},{0,1,1,0,1},{1,1,0,0,1}};
//int l3[7][5]={{1,0,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1},{0,1,0,0,1}};
int l3[7][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
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

void  read_file_test1(int x, int (*arr_t)[5])
{
    int a[7][5];
    int i,j,k;
    FILE* fp;
    char ch,filename[30],fr[20],ba[10]={".dat"};
    itoa(x,filename,10);
    strcat(filename,ba);
     fp=fopen(filename,"r");
    if(fp==NULL)
        exit(0);
    for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%d",&arr_t[i][j]);
		}
		fscanf(fp,"\n");
	}
    fclose(fp);

}

Status read_file_test(int x,int (*arr_t)[5])
{
    int a[7][5];
    int i,j,k;
	 char ch,filename[100],ba[10]={".dat"};
	  FILE* fp;
    /*************************************************/
    /*************add code to get name****************/
    /*************************************************/

    itoa(x,filename,10);
    strcat(filename,ba);

	 fp=fopen(filename,"r");

    if(fp==NULL)
        return ERROR;
    for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%d",&arr_t[i][j]);
		}
		fscanf(fp,"\n");
	}
    fclose(fp);
    return OK;
}

Status init_test(Linklist L)
{
    int (*arr_t)[5],s[7][5],i,j,k;
    Linklist p1,p2;
    p2=L;
    for(i=1;;i++)  //test mode
    {
       p1=(Linklist) malloc(LEN);
	   arr_t=s;
       if(read_file_test(i,arr_t)==ERROR)
        break;
       p1->worknum=i;
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

Status Correct_Init(Linklist L)
{
	Linklist p;
		int flag=1;
	p=L->Next;

	while(flag)
	{
		if(p->Next->Next==NULL)
		{
			p->Next=NULL;
			flag=0;
			break;
		}
		p=p->Next;
	}
	return OK;
}

Status Show_Link_lesson(Linklist L)
{
    int i,j,k;
    Linklist p;
    p=L->Next;
    while(p!=NULL)
    {
        printf("%d:\n",p->worknum);
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
    int flag=1,x=0;
    Linklist t;
    t=L->Next;
    while(t!=NULL)
    {
        if(t->lesson_table[i][j]==0 && t->tmp[i]==0 && t->press<MAXPRESS)
        {
            *(*(p+i)+j)=t->worknum;
            t->work_table[i][j]=1;
            t->tmp[i]=1;
            t->press++;
			flag=0;
            break;
        }
        t=t->Next;
    }
	if(flag)
		*(*(p+i)+j)=0;
    return OK;
}


Status pb_ful_test(int (*p)[5],Linklist L,int i,int j)
{
     int x,y,flag=1;
     Linklist t;
     t=L->Next;
    if(j<2) //daytime
    {
        y=(2*j)+1;  //single2
        x=2*j; //single1

        while(t!=NULL)
        {
            if(t->lesson_table[i][x]==0 &&  t->lesson_table[i][y]==0 && t->tmp[i]==0 && t->press<MAXPRESS)
            {
                *(*(p+i)+x)=t->worknum;
                *(*(p+i)+y)=t->worknum;
                t->work_table[i][x]=1;
                t->work_table[i][y]=1;
                t->tmp[i]=1;
                t->press++;
                flag=0;
                break;
            }
            t=t->Next;
        }
        if(flag)
        {
            pb_test(p,L,i,x);
            pb_test(p,L,i,y);
        }
    }
    if(j==2)
    {
        pb_test(p,L,i,2*j);
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
	return OK;
}

void main()
{
    Linklist L;
    int j,k;
    int pb[7][5];
    L=(Linklist)malloc(LEN);
    init_test(L);
	Correct_Init(L);
    Show_Link_lesson(L);
    for(j=0;j<7;j++)
            for(k=0;k<3;k++)
                pb_ful_test(pb,L,j,k);
    pb_print(pb);
}




