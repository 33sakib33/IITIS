
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
    int semester;
    char subn[6][12];
    int subject[6];
}result[100000];
struct studentc{
    int roll;
    float cgpa;
}gp[165];
char pass[20];
void menu();
void getinfo();
void enterinfo();
void enterresult();
void individualsearch();
double cgpa(int number);
void batchsearch();
void ucgpa();
void gradeprinter( int number);
int password();
void infolist();
