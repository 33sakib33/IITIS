
struct student
{
    char name[20];
    char address[80];
    int roll;
    long reg;
}info[165];
struct studentr
{
    int roll;
    char subn[6][12];
    int subject[6];
}result[165];
struct studentc{
    int roll;
    double cgpa;
}cg[165];

void menu();
void getinfo();
void enterinfo();
void enterresult();
void individualsearch();
double cgpa(int number);
void batchserch();
