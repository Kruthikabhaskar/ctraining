#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2];//static
    int **p;
    p = (int *)malloc(sizeof(int)*2); // allocating memory  for rows
    *(p+0) =(int *)malloc(sizeof(int)*3);// allocating memmory for column
    * (p+1)=(int *)malloc(sizeof(int)*3);
    
    *(*(p+0) +0)=100;
    *(*(p+0)+1)=200;
    *(*(p+0)+2)=300;
    *(*(p+1)+0)=400;
    *(*(p+1)+1)=500;
    *(*(p+1)+2)=600;

printf("%d\n",p[0][0]);
printf("%d\n",p[0][1]);
printf("%d\n",p[0][2]);
printf("%d\n",p[1][0]);
printf("%d\n",p[1][1]);
printf("%d\n",p[1][2]);

    return 0;
}
