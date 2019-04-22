#include<stdio.h>
#include"menu.h"

void ucgpa()
{
    FILE* fresult;
    FILE* fcgpa;
    fcgpa=fopen("stdncgpa.txt","a+");
    fresult=fopen("stdntresult.txt","r+");
    int c=0;
    int d;
     while(1)
        {
            if((d=getc(fresult))==EOF)
                break;
            fscanf(fresult,"%d\n",result[c].roll);
            for(int j=0; j<6; j++)
            {
                fscanf(fresult,"%s\n",result[c].subn[j]);
                fscanf(fresult,"%d\n",&result[c].subject[j]);
            }
        }



}
