#include<stdio.h>
#include<stdlib.h>

void read_name(int x, char *str)
{
    char ch,filename[100],ba[10]={".txt"};
	  FILE* fp;
    itoa(x,filename,10);
    strcat(filename,ba);
	 fp=fopen(filename,"r");
	 fgets(str,20,fp);
}

void main()
{
    char s[100];
    read_name(1,s);
    printf("%s",s);
}
