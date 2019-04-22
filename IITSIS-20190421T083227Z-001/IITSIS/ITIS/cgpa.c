

cgpa(int number)
{
    int fail=1;
    double g;
    double *g1;
    if(number>=80)
    {
        g=4.00;
        printf("Letter Grade: A+\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number>=75&&number<80)
    {
        g=3.75;
        printf("Letter Grade: A\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number>=70&&number<75)
    {
        g=3.50;
        printf("Letter Grade: A-\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number>=65&&number<70)
    {
        g=3.25;
        printf("Letter Grade: B+\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number>=60&&number<65)
    {
        g=3.00;
        printf("Letter Grade: B\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number>=55&&number<60)
    {
        g=2.75;
        printf("Letter Grade: B-\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number>=50&&number<55)
    {
        g=2.50;
        printf("Letter Grade: C+\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number>=45&&number<50)
    {
        g=2.25;
        printf("Letter Grade: C\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number>=40&&number<45)
    {
        g=2.00;
        printf("Letter Grade: D\n");
        printf("Numeric Grade:%f\n",g);
    }
    else if(number<40)
    {
        g=0.00;
        printf("Letter Grade: F\n");
        printf("Numeric Grade:%f\n",g);
        fail=0;
    }
    g1=&g;
    /* if (fail==0)
     {
         g=0;
     }*/
    return g1;


}
