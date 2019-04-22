#include<stdio.h>
#include"menu.h"



void enterinfo()
{
int c=0;
    printf("How many do you want to enter:");
    scanf("%d",&c);
    FILE* fp;
    char x;
    fp=fopen("stdntinfo.txt","a+");
        for(int i=0; i<c; i++)
        {
            scanf("%c",&x);
            printf("Name:");
            scanf("%[^\n]s\n", info[i].name);
            printf("Address:");
            scanf("\n%[^\n]s", info[i].address);
            printf("Roll:");
            scanf("%d",&info[i].roll);
            printf("Registration Number:");
            scanf("%ld",&info[i].reg);
        }
        for(int i=0; i<c; i++)
        {
            fprintf(fp,"%s\n", info[i].name);
            fprintf(fp,"%s\n", info[i].address);
            fprintf(fp,"%d\n", info[i].roll);
            fprintf(fp,"%ld\n",info[i].reg);
        }
    fclose(fp);


}
