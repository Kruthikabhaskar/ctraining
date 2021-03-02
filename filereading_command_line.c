#include <stdio.h>

int main( int argc, char *argv[] )  {

   if(argc < 2)
   {
       printf("at least one argument required ");
       printf("file name is %s",argv[0]);
       return ;
   }
   FILE *fp;
   char buf[100];
   fp=fopen(argv[1],"r");
   fscanf(fp,"%s",buf);
   printf("1: %s \n",buf);
   fclose(fp);
}
