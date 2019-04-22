#include<stdio.h>
#include"menu.h"


void menu()
{

    int option;
    printf("For Query: 1\nFor Entry: 2\nExit : 0\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        printf("Individual Query: 1\nBatch Query: 2\nGo Back: 3\nExit: 0\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            individualsearch();
            menu();
        case 2:
            batchsearch();
        case 0:
            printf("Are you sure you want to exit?\n0 for Yes\n1 for No\n");
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
        printf("Information Entry: 1\nResult Entry:2\nExit: 0\n");
        scanf("%d",&option);
        switch(option)
        {

        case 1:
            enterinfo();
            printf("Do you Want to enter again?\nYes:1\nNo:0\n");
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
            printf("Are you sure you want to exit?\n0 for Yes\n1 for No\n");
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
    case 0:
        printf("Are you sure you want to exit?\n0 for Yes\n1 for No\n");
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
