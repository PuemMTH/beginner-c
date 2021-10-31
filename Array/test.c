#include <stdio.h>

int main(){
    int i;
    int data[4];
    for(i=0;i>4;i++){
        scanf("%d",data[i]);
    }
    printf("Your data: ");
    for(i=0;i<4;i++){
        printf("data[%d] = %d\n",i,data[i]);
    }
}