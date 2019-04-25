#include<stdio.h>
#include"menu.h"

void ucgpa()
{
    FILE* finfo;
    FILE* fresult;
    FILE* fgpa;
    finfo=fopen("stdntinfo.txt","r+");
    fgpa=fopen("stdentcgpa.txt","r+");
    int d;
    int c=0;

 while(fscanf(finfo,"%d",&d)!= EOF)
        {
           /* if((d=getc(finfo))==EOF)
                break;*/
            fscanf(finfo,"\n%[^\n]s",info[c].name);
            fscanf(finfo,"\n%[^\n]s",info[c].address);
            /*fgets(info[c].name,sizeof(info[c].name),finfo);*/
            /*fgets(info[c].address,sizeof(info[c].address),finfo);*/
            fscanf(finfo,"\n%d",&info[c].roll);
            fscanf(finfo,"%ld",&info[c].reg);
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
         while(fscanf(fresult,"%d",&d)!=EOF){
               /* if(((s=getc(fresult))==EOF))
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

 fclose(fgpa);
 fgpa=fopen("stdentcgpa.txt","w+");
 fclose(fgpa);
 fgpa=fopen("stdentcgpa.txt","a+");
 fprintf(fgpa,"8");
 fclose(fgpa);
 double cal;
 double sum=0,g,flag=1;
 double semc=0;
    for(int i=0;i<c;i++)
    {

                semc=0;
                flag=1;
                sum=0;
                for(int k=0;k<r;k++)
                {
                    if(info[i].roll==result[k].roll)
                    {
                        if(result[k].semester==7)
                            y=1;
                        else y=6;
                       for(int j=0;j<y;j++)
                       {
                          semc++;
                        if(result[k].semester!=7)
                        {
                        g=cgpa(result[k].subject[j]);
                        if(g<1)
                        flag=0;
                        }
                        else g=result[k].subject[j];
                        sum=sum+g;

                       }

                    }


                }
                    if(sum!=0)
                    {
                    cal=(sum/semc)*flag;
                    fgpa=fopen("stdentcgpa.txt","a+");
                    fprintf(fgpa,"%d\n",info[i].roll);
                    fprintf(fgpa,"%.2f\n",cal);
                    fclose(fgpa);
                    }



            }
}








