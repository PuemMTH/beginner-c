#include <stdio.h>
#include <string.h>
#include <math.h> // sin cos tan pow log floor ceill

void PrintLogerLine(int x){
    int i;
    for (i = 0; i < x; i++){
        printf("%c", '*');
    }
    printf("\n");
}

int main(){
    int i = 5;
    PrintLogerLine(i);
}


// void PrintCharLine(char c,int len){
//     int i;
//     for(i = 0; i < len; i++){
//         printf("%c", c);
//     }
//     printf("\n");
// }
// int main(){
//     PrintCharLine('x',10);
//     PrintCharLine('*',20);
//     PrintCharLine('v',20);
//     getchar();
// }


// void PlotChar(char c,int dist){
//     int i;
//     for(i = 0; i < dist; i++)
//         printf(" ");
//     printf("%c", c);
//     printf("\n");
// }
// void main(){
//     PlotChar('x',1);
//     PlotChar('-',2);
//     PlotChar('+',3);
//     PlotChar('o',6);
// }

// double TriangleArea(double w,double h){
//     double area = w*h/2.0;
//     return area;
// }
// void main() {
//     double width,height;
//     printf("Enter width : ");
//     scanf("%lf",&width);
//     printf("Enter heigt : ");
//     scanf("%lf",&height);
//     printf("The area of the triangle is %.2lf. \n", TriangleArea(width,height));
// }


// double CircleArea(double x){
//     return 3.14159*x;
// }

// void main(){
//     double radius;
//     printf("Enter radius : ");
//     scanf("%lf",&radius);
//     printf("The area of the cricle is %2lf. \n",CircleArea(radius));
// }

// double f(int n) { 
//     double sum = 0; 
//     int i; 
//     for (i = 1; i <= n; i++) 
//         sum += (double)1/i;
//     return sum; 
// }
// void main() { 
//     int x; 
//     printf(" x | f(x)\n"); 
//     printf("---+------\n"); 
//     for (x = 1; x <= 15; x++) { 
//         printf("%2d | %.3lf\n", x, f(x));
//     }
// }

// int sum = 0;
// void AddToSum(int x){
//     sum = sum + x;
//     printf("Sum in functionAdd = %d\n",sum);
// }

// void SubtractFromSum(int x) {
//     int sum = 0;
//     sum = sum - x; 
//     printf("Sum in functionSubtract = %d\n", sum);

// }
// void main() { 
//     AddToSum(20);
//     SubtractFromSum(5); 
//     printf("Sum = %d\n", sum);
// }

// void PlotChar(char c, int dist){
//     int i;
//     for(i=0;i<dist;i++){
//         printf(" ");
//     }
//     printf("%c\n", c);
// }

// double f(int x) { 
//     double fx = 20+10*sin(x/(22.0/7));
//     return fx;
// }

// int main() { 
//     int x; 
//     printf(" x | f(x)\n"); 
//     printf("---+--------------------------------------> Y\n"); 
//     for (x = 1; x <= 50; x++) { 
//         printf("%2d | ", x);
//         PlotChar('*',(int)floor(f(x)));
//     }
// }