#include <stdio.h>
struct employee{
    char empid[10];
    char empname[30];
    char company[50];
};
typedef struct employee ll;
int main()
{
    FILE *fp;
    fp=fopen("employeedb.txt","wb");
    ll n1;
    fseek(fp,0,SEEK_SET);
    fread(&n1,sizeof(n1),1,fp);
    printf("%c",n1.empid);
    printf("%s",n1.empname);
    printf("%s",n1.company);
    fclose(fp);
    return 0;
    
}
