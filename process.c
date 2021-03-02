#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
        int pid=fork();
        if(pid==0)
        {
                printf("hello im child process");
        }
        else
        {
                printf("im parent,obey meeeee");
        }
        return 0;
}
