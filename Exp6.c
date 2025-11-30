#include <stdio.h>
int storage_class()
{
    static int abc = 0;
    printf("Counter is %d \n",abc);
    abc++;
}
int main()
{
    storage_class();
    storage_class();
    storage_class();
    storage_class();
    storage_class();
    return 0;
}
