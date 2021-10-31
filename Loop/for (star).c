#include<stdio.h>
#include<string.h>

void main(){
    int n, i;
    long int digits, count_digits = 0;
    long int pow_n, base_digits, pown_temp, base_temp;
    printf("Please input N : ");
    scanf("%d",&n);
    for(digits = n ; digits != 0 ; ++count_digits){
        digits /= 10;
    }
    for(i = 0, pow_n = n*n, base_digits = n; i < count_digits ; i++){
        pown_temp = pow_n % 10; pow_n /= 10;
        base_temp = base_digits % 10; base_digits /= 10;
        if(pown_temp != base_temp){
            printf("n^2 : %d\n", n*n);
            printf("No. %d is not automorphic number.\n",n);
            break;
        }
        // printf("\n([%d]%d == %d[%d])",n*n,pown_temp, base_temp, n);
    }
    if(pown_temp == base_temp){
        printf("n^2 : %d\n", n*n);
        printf("Yes. %d is automorphic number.\n",n);
    }
}