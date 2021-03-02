#include <stdio.h>
#include <unistd.h>
#define MSGSIZE 16
char* msg1 = "hello";
int main()
{
	char buf[MSGSIZE];
	int p[2],pid,m1;
	if(pipe(p) < 0)
		exit(1);
		
	if(pid=fork())>0)
	{
		write(p[1],msg,MSGSIZE);
	}
	else
	{
		while((m1=read(p[0],buf,MSGSIZE))>0);
		printf("%s\n",buf);
	}
	if(m1 !=0)
	{
		exit(2);
		printf("Finished reading \n");
	}
	return 0;
}
}
