#include <stdio.h>
int main() {
    char i,a = 0;
    printf("Write something:");
    scanf("%c", &i);
    do{
        switch (i)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            printf("%c",i);
            break;
        case 'e':
            a=1;
            break;
        default:
            printf("This is not a number"); 
            break;
        }
    }while (a==0);
}