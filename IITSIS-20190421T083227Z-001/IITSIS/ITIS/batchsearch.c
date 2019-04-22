#include<stdio.h>
#include"menu.h"

void batchsearch()
{
   FILE* finfo;
    FILE* fresult;
    finfo=fopen("stdntinfo.txt","r+");
    fresult=fopen("stdntresult.txt","r+");
    int d;
    int c=0;
    int batch;
    printf("Enterbatch:");
    scanf("%d",&batch);
  while(1)
        {
            if((d=getc(fresult))==EOF)
                break;
            fgets(info[c].name,sizeof(info[c].name),finfo);
            fgets(info[c].address,sizeof(info[c].address),finfo);
            fscanf(finfo,"%d",&info[c].roll);
            fscanf(finfo,"%ld\n",&info[c].reg);
            fscanf(fresult,"%d\n",&result[c].roll);
            for(int j=0;j<6;j++)
            {
                fscanf(fresult,"%s",result[c].subn[j]);
                fscanf(fresult,"\n%d\n",&result[c].subject[j]);
            }
            c++;
        }
    for(int i=0; i<c; i++)
    {
        if(batch==info[i].roll/100)
        {
            printf("Individual Result:\n");
            printf("%s\n",info[i].name);
            printf("%d\n",info[i].roll);
            printf("%ld\n",info[i].reg);
            for(int j=0; j<6; j++)
            {
                printf("%s: ",result[i].subn[j]);
                printf("%d\n",result[i].subject[j]);
            }
    }
    }
}

