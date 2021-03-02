#include <stdio.h>
#include <string.h>
struct emp // new user defined datatype
 {
 char id[10];
char name[20];
 };

int main()
{
 struct emp employees[3]; // struct emp vs emp1
 char sid[10]; int flag=0; int sindex=0;

 printf("Enter 3 employee records id and name \n");

 for (int i = 0; i < 3; i++) {
 scanf("%s",employees[i].id);
 scanf("%s",employees[i].name);
 }
 
 for (int i = 0; i < 3; i++) {
 printf("%s\t",employees[i].id);
 printf("%s\n",employees[i].name);
 }

 printf("Enter employe id to search \n");
 scanf("%s",sid);

 for (int i = 0; i < 3; i++) {
 if(strcmp(sid,employees[i].id) == 0)
 {
 flag=1; sindex = i;
 break;
 }
 }
 if(flag==1)
 {
 printf("Employee Found \n")
 printf("%s\t",employees[sindex].id);
 printf("%s\n",employees[sindex].name);
 }
 else
 printf("Employee with id %s not found \n",sid);
 return 0;
}
