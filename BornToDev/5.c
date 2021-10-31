// 80- 100 ได้เกรด A ,
// 70 - 79 ได้เกรด B ,
// 60 - 69 ได้เกรด C ,
// 50 - 59 ได้เกรด D ,
// 50 จะได้เกรด F
#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i<50){ // <50
        printf("F");
    }else if(i<60){ // 50 --> 59
        printf("D");
    }else if(i<70){ // 60 --> 69
        printf("C");
    }else if(i<80){ // 70 --> 79
        printf("B");
    }else if(i<100){ // 80 --> 100
        printf("A");
    }
}