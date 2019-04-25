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
    printf("\t\t\tEnterbatch:");
    scanf("%d",&batch);
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
    int tempr;
    long tempre;
    char temp[25];
    int index1=0,index2=0;
    for(int i=0;i<c;i++)
    {
        for(int j=i+1;j<c;j++)
        {
            index1=0;
            index2=0;
            if(info[i].roll>info[j].roll)
            {
                 index1=0;
            index2=0;
        while(info[i].name[index1]!='\0')
  {
	temp[index2]=info[i].name[index1];
	index1++;
	index2++;
  }
  temp[index2]='\0';
  index1=0, index2=0;
  while(info[j].name[index1]!='\0')
  {
	info[i].name[index2]=info[j].name[index1];
	index1++;
	index2++;
  }
  info[i].name[index2]='\0';
  index1=0, index2=0;
  while(temp[index1]!='\0')
  {
	info[j].name[index2]=temp[index1];
	index1++;
	index2++;
  }
  info[j].name[index2]='\0';
                tempr=info[i].roll;
                info[i].roll=info[j].roll;
                info[j].roll=tempr;
                tempre=info[i].reg;
                info[i].reg=info[j].roll;
                info[j].reg=tempre;
    while(info[i].address[index1]!='\0')
  {
	temp[index2]=info[i].address[index1];
	index1++;
	index2++;
  }
  temp[index2]='\0';
  index1=0, index2=0;
  while(info[j].address[index1]!='\0')
  {
	info[i].address[index2]=info[j].address[index1];
	index1++;
	index2++;
  }
  info[i].address[index2]='\0';
  index1=0, index2=0;
  while(temp[index1]!='\0')
  {
	info[j].address[index2]=temp[index1];
	index1++;
	index2++;
  }
  info[j].address[index2]='\0';
            }
        }

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

 FILE* fgpa;
 int p=0;
 fgpa=fopen("stdentcgpa.txt","r+");
 while(getc(fgpa)!=EOF)
 {
    /* h=getc(fgpa);
     if(h==EOF)
        break;*/
        fscanf(fgpa,"%d\n",&gp[p].roll);
        fscanf(fgpa,"%f",&gp[p].cgpa);
        /*printf("%d\n",gp[p].roll);
        printf("%.2f\n",gp[p].cgpa);*/
        p++;
 }
 int flag=0;
     printf("\t\t\t---Result of %dth batch:\n",batch);
    for(int i=0; i<c; i++)
    {
        flag=0;
        if(batch==info[i].roll/100)
        {

            for(int k=0;k<r;k++)
            {

            if(info[i].roll==result[k].roll)
            {
            if(flag!=1){
                printf("NAME:::::%s\n",info[i].name);
                printf("BSSE");
                if(info[i].roll<1000)
                printf("0");
                printf("%d\n",info[i].roll);
            printf("%ld\n",info[i].reg);
            flag=1;
            }
            printf("___________Semester:%d___________\n",result[k].semester);
            if(result[k].semester==7)
                y=1;
            else y=6;
            for(int j=0; j<y; j++)
            {
                printf("%s: ",result[k].subn[j]);
                printf("%d\n",result[k].subject[j]);
                 gradeprinter(result[k].subject[j]);
            }
            }
            }
            for(int z=0;z<p;z++)
                    {
                        if(info[i].roll==gp[z].roll)
                        printf("CGPA: %.2f\n",gp[z].cgpa);
                    }
                    printf("-----------------------\n");
    }
    }
}

