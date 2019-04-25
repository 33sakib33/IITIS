#include<stdio.h>
struct student
{
    char name[20];
    char address[80];
    char roll[9];
    long reg;
};


void getinfo()
{
    struct student info[5];

    FILE* fp;
    char x;
    fp=fopen("stdinfo.txt","a+");
    for(int i=0; i<5; i++)
    {


        fscanf(fp,"%[^\n]s\n", info[i].name);
        fscanf(fp,"\n%[^\n]s", info[i].address);
        fscanf(fp,"\n%[^\n]s", info[i].roll);
        fscanf(fp,"%c",&x);
        fscanf(fp,"%c",&x);
        fscanf(fp,"%c",&x);
        fscanf(fp,"%ld\n",&info[i].reg);

    }

    for(int i=0; i<5; i++)
    {
        printf("%s\n%s\n%s\n%ld\n",info[i].name,info[i].address,info[i].roll,info[i].reg);


    }
    fclose(fp);

}
