#include <stdio.h>

int main()
{
    int a[4]={1,2,3,4};
    int *p;
    printf("%d\n",*(a+3));
    printf("%d\n",a[2]);
    printf("%x\n",(a+2));
    printf("%d\n",(a));
    printf("%d\n",&a);
    
}
