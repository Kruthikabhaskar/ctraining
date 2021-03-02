#include<stdio.h>
#include<stdlib.h>

 

struct employee{
    char empid[10];
    char empname[100];
     char company[50];
  //  struct employee *link;
}e1;
typedef struct employee emp;
 
int main()
{
 FILE *fp;
 fp = fopen("employeedb.bin","rb");
 
 if(fp==NULL)
 {
     printf("error printing\n");
     exit(1);
 }
 printf("testing\n");
 while(fread(&e1,sizeof(e1),1,fp)==1){
         
 printf("%s\t",e1.empid);
 printf("%s\t",e1.empname);
 printf("%s\n",e1.company);
     }
 fclose(fp);
 return 0;
}
