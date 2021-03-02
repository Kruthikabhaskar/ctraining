#include <stdio.h>

struct emp{
    int id;
    char name[20];
};
int main()
{
    struct emp e;
    printf("size of struct is %d",sizeof(struct emp));
    printf("size of structure is %d",sizeof(e));
    return 0;
}
