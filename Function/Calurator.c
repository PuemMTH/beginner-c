#include <stdio.h>
#include <string.h>
#include <math.h> // sin cos tan pow log floor ceill

float first_num;
void math(float sum_num){
    char i,a = 0;
    printf("Input Operator : ");
    scanf("%c", &i);
    do{
        switch(i){
            case '1':
                printf("Initial Value : ");
                scanf("%f",sum_num);
                first_num = first_num + sum_num;
                printf("Present Value : %.2f\n", first_num);
            // case '-':
            //     printf("Initial Value : ");
            //     scanf("%f",sum_num);
            //     first_num = first_num - sum_num;
            //     printf("Present Value : %.2f\n", first_num); 
            // case '/':
            //     printf("Initial Value : ");
            //     scanf("%f",sum_num);
            //     first_num = first_num / sum_num;
            //     printf("Present Value : %.2f\n", first_num);
            // case '*':
            //     printf("Initial Value : ");
            //     scanf("%f",sum_num);
            //     first_num *= sum_num;
            //     printf("Present Value : %.2f\n", first_num);
            case 'q':
                a == 1;
                break;
            default:
                break;
        }
    }while(a==0);
}

void main(){
    printf("Initial Value : ");
    scanf("%lf", &first_num);
    math(first_num);
}