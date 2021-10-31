#include<stdio.h>
#include<string.h>

int main(){
    int i,num_scan;
    for(i = 8; i <= 80; i = i + 8 ){
        printf("%d\n",i);
    }
}

void main(){
    int i, N, count = 0;
    printf("Enter N: ");
    scanf("%d",&N);
    for(i = 1; i <= N; i++){
        if(N%i == 0){ count++; }
    }
    printf("The number of divisors of %d is %d\n",N,count);
}

void main(){
    int i, N, count = 0;
    int a_input, b_input, c_input;
    printf("Enter A: ");
    scanf("%d",&a_input);
    printf("Enter B: ");
    scanf("%d",&b_input);
    printf("Enter C: ");
    scanf("%d",&c_input);

    for(i = a_input + 1; i < b_input; i++){
        if(i%c_input==0) count++;
    }
    
    printf("Output : There is %d number divisible by",count);

    for(i = a_input + 1; i < b_input; i++){
        if(i%c_input==0) printf(" %d ",i);
    }
}

// เช็คว่าเป็นจำนวนเฉพาะหรือป่าว
void main(){
    int i, a_input, count = 0;
    printf("\nEnter for chack is Prime number : ");
    scanf("%d",&a_input);
    for(i = 1; i <= a_input; i++){
        // printf("\n%d",i);
        if(a_input%i==0){
            count++;
            // printf("[/]");
        }
    }
    if(count == 2){
        printf("%d is a prime.", a_input);
    }else{
        printf("%d is not a prime.", a_input);
    }
}

// ***
// ***
// ***
void main(){
    int n, i, j;
    printf("Input n : ");
    scanf("%d",&n);
    for(i = 0;i <= n;i++){
        // printf("*");
        for (j = 0;j <= n;j++){
            printf("*");
        }
        printf("\n");
    }
}

// *
// **
// ***
void main(){
    int n, i, j;
    printf("Input n : ");
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        // printf("*");
        for (j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
}

//     *
//    ***
//   *****
//  *******
// *********
void main(){
    int n, i, j;
    printf("Input n : ");
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        // printf("*");
        for (j = 1;j <= n-i;j++){
            printf(" ");
        }
        for (int k = 1;k <= 2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}


// Please input N : 12
// Factor of n : 1 2 3 4 6 12
// Sumation of factor is 28.

void main(){
    int n,sum;
    printf("Please input N : ");
    scanf("%d",&n);
    printf("Factor of n : ");
    for(int i = 1; i <= n ;i++){ // หาตัวประกอบ 1 2 3 ... n 
        if(n%i==0){ // n%1 n%2 n%3 .. n%i  
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\nSumation of factor is %d.",sum);
}

// Please input N : 12
// Factor of n : 1 2 3 4 6 12
// Sumation of factor is 28.
// Loop(exit)
void main(){
    while(1){
        int n,sum = 0;
        printf("\nPlease input N : ");
        scanf("%d",&n);
        if(n < 0){
            break;
        }
        printf("\nFactor of n : ");
        for(int i = 1; i <= n ;i++){
            if(n%i==0){
                printf("%d ",i);
                sum += i;
            }
        }
        printf("\nSumation of factor is %d.",sum);
    }
    printf("Program End.");
}