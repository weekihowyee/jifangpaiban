#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void  read_file_test(int x, int (*arr_t)[5])
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
    /*for(j=0;j<7;j++)
         {
            for(k=0;k<5;k++)
            {
                printf("%d\t",a[j][k]);
            }
             printf("\n");
         }
        for(j=0;j<7;j++)
         {
            for(k=0;k<5;k++)
            {
                arr_t[j][k]=a[j][k];
            }
         }*/
}

void main()
{
    int (*att)[5],j,k,s[7][5];
    att=s;
    read_file_test(1,att);
    for(j=0;j<7;j++)
         {
            for(k=0;k<5;k++)
            {
                printf("%d\t",att[j][k]);
            }
             printf("\n");
         }
}










