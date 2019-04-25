#include<stdio.h>
#include"menu.h"
void infolist()
{
     FILE* finfo;
    finfo=fopen("stdntinfo.txt","r+");
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
    int flag=0;
    for(int i=0; i<c; i++)
    {
        if(batch==info[i].roll/100)
        {
            if(flag=0)
            {
                printf("\t\t\tStudent List:\n");
                flag=1;
            }
           /*  printf("|Name                | Roll                |Reg                |Address                |\n");
                printf("|%s|",info[i].name);
                printf("                |");
                printf("BSSE");
                if(info[i].roll<1000)
                printf("0");
                printf("%d",info[i].roll);
                 printf("                |");
                printf("%ld",info[i].reg);
                 printf("                |");
                printf("%s",info[i].address);
                 printf("                \n|");*/

                printf("Name        :%s\n",info[i].name);
                printf("Roll        :BSSE");
                if(info[i].roll<1000)
                printf("0");
                printf("%d\n",info[i].roll);
                printf("Registration:%ld\n",info[i].reg);
                printf("Adress      :%s\n",info[i].address);



    }
    }


}
