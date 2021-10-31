// #include <stdio.h>

// int vercel(int x){
//     printf("%d\n", x);
// }

// int main(){
//     vercel(1);
// }

// #include <stdio.h>
// int x = 5,y = 10;

// void add(void){
//     int ans = x + y;
//     printf("Ans = %d\n" ,ans);
// }

// int main(){
//     int x , y ;
//     x = 9;
//     y = 19 ;
//     add();
//     printf("Main = %d\n " ,x+y);
// }

// #include <stdio.h>
// int x,y ;
// void add(void){ 
//     int ans;
//     ans = x + y;
//     printf("Ans = %d\n " ,ans);
// }

// int main(){
//     printf("Enter 2 number : ");
//     scanf("%d %d", &x, &y);
//     add();
// }

// #include <stdio.h>
// void add(int x, int y){ 
//     int ans;
//     ans = x + y;
//     printf("Ans = %d\n " ,ans);
// }

// int main(){
//     int x,y ;
//     printf("Enter 2 number : ");
//     scanf("%d %d", &x, &y);
//     add(x,y);
// }

int x,y ;
void swap(){
    int tmp;
    tmp = y;
    y = x;
    x = tmp;
    printf("Swap : x=%d y=%d\n",x,y);
}

int main(){
    x = 5 ; y = 10 ;
    printf("Before : x=%d y=%d\n",x,y);
    swap();
    printf("After : x=%d y=%d\n",x,y);
}
