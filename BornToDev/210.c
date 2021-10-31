#include <stdio.h>
int vacter(int t){
    int sum = 0;
    for (int i = 1; t >= i; t--)
    {
        sum = sum * t-1;
        printf("[%d*%d] = [%d]\n",t,t-1,sum);
    }
    return sum;
}

int main(){
    int v,t;
    scanf("%d",&t);
    printf("%d",vacter(t));
}