#include <stdio.h>
#include <stdlib.h>
struct node{
        int data;
        struct node *link;
};
typedef struct node ll;
int main()
{
        FILE *p;
        p=fopen("data","wb");
        ll n1;
        n1.data=10;
        n1.link=12345;
        fwrite(&n1,sizeof(n1),1,p);
        printf("done with writing");
        fclose(p);
        return 0;
}
