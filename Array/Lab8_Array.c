#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Mateo";
    int length = strlen(name);
    printf("\"%s\" is %d characters string\n", name, length);
    printf("Length of \"C Language\" is %d\n", strlen("C Language"));
    return 0;
}