#include <stdio.h>
int vacter(int v,int t){
    return v/t;
}

int main(){
    int v,t;
    scanf("%d",&v); // ระยะทาง
    scanf("%d",&t); // เวลา
    printf("%d km/h",vacter(v,t));
}