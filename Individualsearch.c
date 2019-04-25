#include<stdio.h>
#include<string.h>
#include"menu.h"


void individualsearch()
{
    FILE* finfo;
    FILE* fresult;
    FILE* fgpa;

    finfo=fopen("stdntinfo.txt","r+");
    /*fresult=fopen("stdntresultsem5.txt","r+");*/
    int d;
    int c=0;
    int rolls;
    printf("\t\t\tEnter Roll:");
    scanf("%d",&rolls);
 while(fscanf(finfo,"%d",&d)!=EOF)
        {
           /* if((d=getc(finfo))==EOF)
                break;*/
            fscanf(finfo,"\n%[^\n]s",info[c].name);
            fscanf(finfo,"\n%[^\n]s",info[c].address);
            /*fgets(info[c].name,sizeof(info[c].name),finfo);*/
            /*fgets(info[c].address,sizeof(info[c].address),finfo);*/
            fscanf(finfo,"\n%d",&info[c].roll);
            fscanf(finfo,"\n%ld",&info[c].reg);
            /*fscanf(fresult,"%d\n",&result[c].roll);
            for(int j=0;j<6;j++)
            {
                fscanf(fresult,"%s",result[c].subn[j]);
                fscanf(fresult,"\n%d\n",&result[c].subject[j]);
            }*/
            c++;
        }


    int r=0;
    int x=1,y;
 while(x!=9){
                if(x==1)
                fresult=fopen("stdntresultsem1.txt","r+");
                else if(x==2)
                fresult=fopen("stdntresultsem2.txt","r+");
                 else if(x==3)
                fresult=fopen("stdntresultsem3.txt","r+");
                 else if(x==4)
                fresult=fopen("stdntresultsem4.txt","r+");
                 else if(x==5)
                fresult=fopen("stdntresultsem5.txt","r+");
                 else if(x==6)
                fresult=fopen("stdntresultsem6.txt","r+");
                else if(x==7)
                fresult=fopen("stdntresultsem7.txt","r+");
                 else if(x==8)
                fresult=fopen("stdntresultsem8.txt","r+");
         while(getc(fresult)!=EOF){
                /*if(((s=getc(fresult))==EOF))
                    break;*/
                    fscanf(fresult,"%d",&result[r].roll);
                    result[r].semester=x;
                if(x==7)
                    y=1;
                else y=6;
                for(int j=0;j<y;j++)
                {
                    fscanf(fresult,"\n%s",result[r].subn[j]);
                    fscanf(fresult,"\n%d",&result[r].subject[j]);
                }
                r++;
     }
     x++;

 }

 int p=0;

   fgpa=fopen("stdentcgpa.txt","r+");
while(getc(fgpa)!=EOF)
 {
    /* h=getc(fgpa);
     if(h==EOF)
        break;*/
        fscanf(fgpa,"%d\n",&gp[p].roll);
        fscanf(fgpa,"%f",&gp[p].cgpa);
       /* printf("%d\n",gp[p].roll);
        printf("%.2f\n",gp[p].cgpa);*/
        p++;
 }

  int semester,flag=0;
     printf("\t\t\tWhich semester?[press 0 for all semesters]: ");
     scanf("%d",&semester);

        for(int i=0; i<c; i++)
        {
            if(rolls==info[i].roll)
            {
                   /* printf("!!!!!!!!,%d",r)*/
                for(int k=0;k<r;k++)
                {

             if(info[i].roll==result[k].roll)
               {
               if (flag!=1){
                printf("Individual Result:\n");
                printf("%s\n",info[i].name);
                printf("BSSE");
                if(info[i].roll<1000)
                printf("0");
                printf("%d\n",info[i].roll);
                printf("%ld\n",info[i].reg);
                printf("%s\n",info[i].address);
                flag=1;
               }

                   if(semester==result[k].semester || semester==0)
                   {
                    printf("_________Semester:%d_________\n",result[k].semester);
                if(result[k].semester==7)
                    y=1;
                else y=6;
                for(int j=0; j<y; j++)
                {
                    if(result[i].subject[j]!=0)
                    {
                    printf("%s: ",result[k].subn[j]);
                    printf("%d\n",result[k].subject[j]);
                    if(result[k].semester!=7)
                    gradeprinter(result[k].subject[j]);
                    else printf("Numeric Grade:%d",result[k].subject[j]);
                    }
                }

               }
              }
              }
              for (int z=0;z<p;z++)
                    {
                        if(info[i].roll==gp[z].roll)
                            printf("\nCGPA: %.2f\n",gp[z].cgpa);
                    }
            }
            else if (i==c-1)
                printf("\t\t\tStudent Info not found\n");
            }

}





