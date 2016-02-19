#include<stdio.h>
#include<stdlib.h>

int a[4]={0,1,2,3};
int b[2][2]={{1,1},{1,1}};
void main()
{
    int (*p)[2];
    p=b;
    printf("%d",*(*(p+1)+1));
}
