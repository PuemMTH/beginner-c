#include <stdio.h>

int main(){
    int ip1,ip2;
    scanf("%d",&ip1);
    scanf("%d",&ip2);
    if(ip1>ip2){
        printf("MAX : %d\n",ip1);
        printf("MIN : %d\n",ip2);
    
    }else if (ip2>ip1)
    {
        printf("MAX : %d\n",ip2);
        printf("MIN : %d\n",ip1);
    }else{
        printf("ERROR");
    }
    
}