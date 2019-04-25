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
    printf("\t\t\tNumber of Entries:");
    scanf("%d",&n);
        if(x==1)
        {
            fp=fopen("stdntresultsem1.txt","a+");
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
                printf("STAT103:");
                strcpy(result[i].subn[2],"STAT103");
                scanf("%d",&result[i].subject[2]);
                printf("MATH104:");
                strcpy(result[i].subn[3],"MATH104");
                scanf("%d",&result[i].subject[3]);
                printf("GE105:");
                strcpy(result[i].subn[4],"GE105");
                scanf("%d",&result[i].subject[4]);
                printf("SE106:");
                strcpy(result[i].subn[5],"SE106");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==2)
        {
            fp=fopen("stdntresultsem2.txt","a+");
            for(int i=0; i<n; i++)
            {
                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE201:");
                strcpy(result[i].subn[0],"CSE201");
                scanf("%d",&result[i].subject[0]);
                printf("CSE211:");
                strcpy(result[i].subn[1],"CSE211");
                scanf("%d",&result[i].subject[1]);
                printf("SE206:");
                strcpy(result[i].subn[2],"SE206");
                scanf("%d",&result[i].subject[2]);
                printf("STAT203:");
                strcpy(result[i].subn[3],"STAT203");
                scanf("%d",&result[i].subject[3]);
                printf("MATH204:");
                strcpy(result[i].subn[4],"MATH204");
                scanf("%d",&result[i].subject[4]);
                printf("GE212:");
                strcpy(result[i].subn[5],"GE212");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==3)
        {
            fp=fopen("stdntresultsem3.txt","a+");
            for(int i=0; i<n; i++)
            {

                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE301:");
                strcpy(result[i].subn[0],"CSE301");
                scanf("%d",&result[i].subject[0]);
                printf("CSE311:");
                strcpy(result[i].subn[1],"CSE311");
                scanf("%d",&result[i].subject[1]);
                printf("SE312:");
                strcpy(result[i].subn[2],"SE312");
                scanf("%d",&result[i].subject[2]);
                printf("SE305:");
                strcpy(result[i].subn[3],"SE305");
                scanf("%d",&result[i].subject[3]);
                printf("SE306:");
                strcpy(result[i].subn[4],"SE306");
                scanf("%d",&result[i].subject[4]);
                printf("MATH304:");
                strcpy(result[i].subn[5],"MATH304");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==4)
        {
             fp=fopen("stdntresultsem4.txt","a+");
            for(int i=0; i<n; i++)
            {
                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("CSE401:");
                strcpy(result[i].subn[0],"CSE401");
                scanf("%d",&result[i].subject[0]);
                printf("CSE404:");
                strcpy(result[i].subn[1],"CSE404");
                scanf("%d",&result[i].subject[1]);
                printf("CSE411:");
                strcpy(result[i].subn[2],"CSE411");
                scanf("%d",&result[i].subject[2]);
                printf("BUS405:");
                strcpy(result[i].subn[3],"BUS405");
                scanf("%d",&result[i].subject[3]);
                printf("SE406:");
                strcpy(result[i].subn[4],"SE406");
                scanf("%d",&result[i].subject[4]);
                printf("GE402:");
                strcpy(result[i].subn[5],"GE402");
                scanf("%d",&result[i].subject[5]);
            }
        }
        else if(x==5)
        {
             fp=fopen("stdntresultsem5.txt","a+");
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
        else if(x==6)
        {
             fp=fopen("stdntresultsem6.txt","a+");
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
             fp=fopen("stdntresultsem7.txt","a+");
            for(int i=0; i<n; i++)
            {
                printf("Enter Roll:");
                scanf("%d",&result[i].roll);
                printf("Enter Marks:\n");
                printf("SE701:");
                strcpy(result[i].subn[0],"SE701");
                scanf("%d",&result[i].subject[0]);
            }
        }
        else if(x==8)
        {
             fp=fopen("stdntresultsem8.txt","a+");
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
                fprintf(fp,"\n");
                fprintf(fp,"%d",result[i].roll);
                if(x!=7)
                for(int j=0;j<6;j++)
                {
                    fprintf(fp,"\n%s",result[i].subn[j]);
                    fprintf(fp,"\n%d",result[i].subject[j]);
                }
                else
                {
                     fprintf(fp,"\n%s",result[i].subn[0]);
                     fprintf(fp,"\n%d",result[i].subject[0]);
                }
            }
            fclose(fp);







  /*  printf("1.Exit\n2.Go To Main Menu\n");
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
    }*/

}

