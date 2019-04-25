#include<stdio.h>
#include"menu.h"
#include<string.h>
int password()
{
    char en[20];
    FILE* fp;
    fp=fopen("password.txt","r+");
    fscanf(fp,"%s",pass);
    printf("\t\t\tEnter Password:");
    scanf("%s",en);
    if(strcmp(en,pass)==0)
    {
        return 1;
    }
    else {
           return 0;
    }



}
