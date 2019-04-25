#include<stdio.h>
#include"menu.h"


void menu()
{
   /* printf("\e[1;1H\e[2J");*/
    int option;
    printf("\n\t\t\tFor Query: 1\n\t\t\tFor Entry: 2\n\t\t\tUpdate CGPA: 3\n\t\t\tStudent List: 4\n\t\t\tExit : 0\n\t\t\t");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        printf("\t\t\tIndividual Query: 1 \n\t\t\tBatch Query: 2\n\t\t\tGo Back: 3\n\t\t\tExit: 0\n\t\t\t");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            individualsearch();
            menu();
        case 2:
            batchsearch();
        case 3:
            menu();
            break;
        case 0:
            printf("\t\t\tAre you sure you want to exit?\n\t\t\t0 for Yes\n1 for No\n\t\t\t");
            scanf("%d",&option);
            switch(option)
            {
            case 1:
                menu();
            case 0:
                break;
            }
        }
        break;
    case 2:
        printf("\t\t\tInformation Entry: 1\n\t\t\tResult Entry:2\n\t\t\tExit: 0\n\t\t\t");
        scanf("%d",&option);
        switch(option)
        {

        case 1:
            enterinfo();
            printf("\t\t\tDo you Want to enter again?\n\t\t\tYes:1\n\t\t\tNo:0\n\t\t\t");
            scanf("%d",&option);
        switch(option)
        {
        case 1:
            menu();

        case 0:
            break;
        }
        break;

        case 2:
            enterresult();
        case 0:
            printf("\t\t\tAre you sure you want to exit?\n\t\t\t0 for Yes\n1 for No\n\t\t\t");
            scanf("%d",&option);
            switch(option)
            {
            case 1:
                menu();
            case 0:
                break;
            }
        }

        break;

    case 3:ucgpa();
            printf("\n\t\t\t***CGPA UPDATED!***\n\t\t\t");
            menu();
            break;
    case 4:infolist();
            printf("\t\t\tMain Menu: 1\n\t\t\tExit: 0");
            scanf("%d",&option);
           switch(option)
           {
               case 1:menu();
               break;
               case 0:break;
           }
           break;
    case 0:
        printf("\t\t\tAre you sure you want to exit?\n\t\t\t0 for Yes\n1 for No\n\t\t\t");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            menu();
        case 0:
            break;
        }
        break;
    default:
        menu();


    }


}
