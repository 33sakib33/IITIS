#include<stdio.h>
#include"menu.h"



void enterinfo()
{
int c=0;
    printf("\t\t\tNumber of Entries:");
    scanf("%d",&c);
    FILE* fp;
    char x;
    fp=fopen("stdntinfo.txt","a+");
        for(int i=0; i<c; i++)
        {
            scanf("%c",&x);
            printf("Name:");
            scanf("\n%[^\n]s", info[i].name);
            printf("Address:");
            scanf("\n%[^\n]s", info[i].address);
            printf("Roll:");
            scanf("%d",&info[i].roll);
            printf("Registration Number:");
            scanf("%ld",&info[i].reg);
        }
        for(int i=0; i<c; i++)
        {
            fprintf(fp,"\n");
            fprintf(fp,"%s", info[i].name);
            fprintf(fp,"\n%s", info[i].address);
            fprintf(fp,"\n%d", info[i].roll);
            fprintf(fp,"\n%ld",info[i].reg);
        }
    fclose(fp);


}
