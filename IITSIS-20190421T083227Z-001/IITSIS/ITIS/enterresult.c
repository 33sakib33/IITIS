#include<string.h>
#include<stdio.h>
#include"menu.h"
void enterresult()
{
    int x;
    printf("Which Semester:");
    scanf("%d",&x);
    int n;
    FILE* fp;
    printf("How many do you want to Enter?");
    scanf("%d",&n);
    fp=fopen("stdntresult.txt","a+");

    char en;
        if(x==0)
        {
            for(int i=0; i<n; i++)
            {
                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE101:");
                strcpy(result[i].subn[0],"CSE101");
                scanf("%d",&result[i].subject[0]);
                printf("CSE102:");
                strcpy(result[i].subn[1],"CSE102");
                scanf("%d",&result[i].subject[1]);
                printf("SE106:");
                strcpy(result[i].subn[2],"SE106");
                scanf("%d",&result[i].subject[2]);
                printf("STAT103:");
                strcpy(result[i].subn[3],"STAT103");
                scanf("%d",&result[i].subject[3]);
                printf("MATH104:");
                strcpy(result[i].subn[4],"MATH104");
                scanf("%d",&result[i].subject[4]);
                printf("GE105:");
                strcpy(result[i].subn[5],"GE105");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==1)
        {
            for(int i=0; i<n; i++)
            {
                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE101:");
                strcpy(result[i].subn[0],"CSE101");
                scanf("%d",&result[i].subject[0]);
                printf("CSE102:");
                strcpy(result[i].subn[1],"CSE102");
                scanf("%d",&result[i].subject[1]);
                printf("SE106:");
                strcpy(result[i].subn[2],"SE106");
                scanf("%d",&result[i].subject[2]);
                printf("STAT103:");
                strcpy(result[i].subn[3],"STAT103");
                scanf("%d",&result[i].subject[3]);
                printf("MATH104:");
                strcpy(result[i].subn[4],"MATH104");
                scanf("%d",&result[i].subject[4]);
                printf("GE105:");
                strcpy(result[i].subn[5],"GE105");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==2)
        {
            for(int i=0; i<n; i++)
            {

                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE101:");
                strcpy(result[i].subn[0],"CSE101");
                scanf("%d",&result[i].subject[0]);
                printf("CSE102:");
                strcpy(result[i].subn[1],"CSE102");
                scanf("%d",&result[i].subject[1]);
                printf("SE106:");
                strcpy(result[i].subn[2],"SE106");
                scanf("%d",&result[i].subject[2]);
                printf("STAT103:");
                strcpy(result[i].subn[3],"STAT103");
                scanf("%d",&result[i].subject[3]);
                printf("MATH104:");
                strcpy(result[i].subn[4],"MATH104");
                scanf("%d",&result[i].subject[4]);
                printf("GE105:");
                strcpy(result[i].subn[5],"GE105");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==3)
        {
            for(int i=0; i<n; i++)
            {

                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE101:");
                strcpy(result[i].subn[0],"CSE101");
                scanf("%d",&result[i].subject[0]);
                printf("CSE102:");
                strcpy(result[i].subn[1],"CSE102");
                scanf("%d",&result[i].subject[1]);
                printf("SE106:");
                strcpy(result[i].subn[2],"SE106");
                scanf("%d",&result[i].subject[2]);
                printf("STAT103:");
                strcpy(result[i].subn[3],"STAT103");
                scanf("%d",&result[i].subject[3]);
                printf("MATH104:");
                strcpy(result[i].subn[4],"MATH104");
                scanf("%d",&result[i].subject[4]);
                printf("GE105:");
                strcpy(result[i].subn[5],"GE105");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==4)
        {
            for(int i=0; i<n; i++)
            {

                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE101:");
                strcpy(result[i].subn[0],"CSE101");
                scanf("%d",&result[i].subject[0]);
                printf("CSE102:");
                strcpy(result[i].subn[1],"CSE102");
                scanf("%d",&result[i].subject[1]);
                printf("SE106:");
                strcpy(result[i].subn[2],"SE106");
                scanf("%d",&result[i].subject[2]);
                printf("STAT103:");
                strcpy(result[i].subn[3],"STAT103");
                scanf("%d",&result[i].subject[3]);
                printf("MATH104:");
                strcpy(result[i].subn[4],"MATH104");
                scanf("%d",&result[i].subject[4]);
                printf("GE105:");
                strcpy(result[i].subn[5],"GE105");
                scanf("%d",&result[i].subject[5]);

            }
        }
        else if(x==5)
        {
            for(int i=0; i<n; i++)
            {

                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE101:");
                strcpy(result[i].subn[0],"CSE101");
                scanf("%d",&result[i].subject[0]);
                printf("CSE102:");
                strcpy(result[i].subn[1],"CSE102");
                scanf("%d",&result[i].subject[1]);
                printf("SE106:");
                strcpy(result[i].subn[2],"SE106");
                scanf("%d",&result[i].subject[2]);
                printf("STAT103:");
                strcpy(result[i].subn[3],"STAT103");
                scanf("%d",&result[i].subject[3]);
                printf("MATH104:");
                strcpy(result[i].subn[4],"MATH104");
                scanf("%d",&result[i].subject[4]);
                printf("GE105:");
                strcpy(result[i].subn[5],"GE105");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==7)
        {
            for(int i=0; i<n; i++)
            {

                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE101:");
                strcpy(result[i].subn[0],"CSE101");
                scanf("%d",&result[i].subject[0]);
                printf("CSE102:");
                strcpy(result[i].subn[1],"CSE102");
                scanf("%d",&result[i].subject[1]);
                printf("SE106:");
                strcpy(result[i].subn[2],"SE106");
                scanf("%d",&result[i].subject[2]);
                printf("STAT103:");
                strcpy(result[i].subn[3],"STAT103");
                scanf("%d",&result[i].subject[3]);
                printf("MATH104:");
                strcpy(result[i].subn[4],"MATH104");
                scanf("%d",&result[i].subject[4]);
                printf("GE105:");
                strcpy(result[i].subn[5],"GE105");
                scanf("%d",&result[i].subject[5]);

            }
        }
        else if(x==7)
        {
            for(int i=0; i<n; i++)
            {

                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE101:");
                strcpy(result[i].subn[0],"CSE101");
                scanf("%d",&result[i].subject[0]);
                printf("CSE102:");
                strcpy(result[i].subn[1],"CSE102");
                scanf("%d",&result[i].subject[1]);
                printf("SE106:");
                strcpy(result[i].subn[2],"SE106");
                scanf("%d",&result[i].subject[2]);
                printf("STAT103:");
                strcpy(result[i].subn[3],"STAT103");
                scanf("%d",&result[i].subject[3]);
                printf("MATH104:");
                strcpy(result[i].subn[4],"MATH104");
                scanf("%d",&result[i].subject[4]);
                printf("GE105:");
                strcpy(result[i].subn[5],"GE105");
                scanf("%d",&result[i].subject[5]);
            }
        }
            for(int i=0; i<n; i++)
            {
                fprintf(fp,"%d\n",result[i].roll);
                for(int j=0;j<6;j++)
                {
                    fprintf(fp,"%s\n",result[i].subn[j]);
                    fprintf(fp,"%d\n",result[i].subject[j]);
                }
            }





    printf("1.Exit\n2.Go To Main Menu\n");
    int option;
    scanf("%d",&option);
    switch(option)
    {
    case 2:
        menu();
    case 1:
        break;
    default:
        break;
    }

}

