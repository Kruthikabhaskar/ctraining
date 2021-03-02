#include <stdio.h>
struct employee{
    char empid[10];
    char empname[30];
    char company[50];
    struct employee *link;
};
typedef struct employee ll;
ll n1;
int main()
{
    FILE *fp;
    int n=10;
    fp=fopen("employeedb.bin","rb");
	if(fp==NULL)
	{
		printf("error printing \n");
	}
	printf("testing \n");
    while(fread(&n1,sizeof(n1),10,fp)==1)
    {
        //fread(&n1,sizeof(n1),1,fp);
        printf("%s\n",n1.empid);
        printf("%s\n",n1.empname);
        printf("%s\n",n1.company);
    }
    fclose(fp);
    return 0;
    
}
