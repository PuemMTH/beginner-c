#include<stdio.h>
#include<math.h>
#include<string.h>

// int main(){
//     int i,j;
//     int Matrix[3][3] = {
//         {90,5,12},
//         {-8,15,-7},
//         {0,23,-8}
//     };
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%4d",Matrix[i][j]);
//         }
//         printf("\n");
//     }
// }


// void ShowMatrix(int A[3][3],int row,int col){
//     int i,j;
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++)
//             printf("%4d",A[i][j]);
//         printf("\n"); 
//     } 
// }
// int main(){
//     int row = 3, col = 3;
//     int A[3][3]={{9,8,7},
//                  {6,5,4},
//                  {1,2,3}};
//     ShowMatrix(A,row,col);
// }


void ShowMatrix(int A[3][3],int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%4d",A[i][j]);
        printf("\n"); 
    } 
}
int main(){
    int i,j, row = 3 ,col = 3;
    int A[3][3];
    printf("Please enter Matrix 3x3 : \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter element [%d][%d] : ",i ,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Matrix A is \n");
    ShowMatrix(A,row,col);
}


void ShowMatrix(int A[3][3],int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%4d",A[i][j]);
        printf("\n"); 
    }
}
int main(){
    int i,j, row = 3 ,col = 3;
    int A[3][3],T[3][3];
    printf("Please enter Matrix 3x3 : \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter element [%d][%d] : ",i ,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Matrix A is \n");
    ShowMatrix(A,row,col);
    for(i=0;i<row; i++){
        for(j=0; j<col;j++){
            T[j][i] = A[i+1][j+1];
        }
        printf("\n");
    }
    printf("Matrix A is \n");
    ShowMatrix(T,row,col);
}



// Det(A) = (a11*a22-a12*a21)
// int Det(int A[2][2]){
//     return (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
// }
// int main(){
//     int i,j, row = 2 ,col = 2;
//     int A[2][2];
//     printf("Enter Matrix A 2x2 : \n");
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++){
//             printf("Enter element [%d][%d] : ",i+1 ,j+1);
//             scanf("%d",&A[i][j]);
//         }
//     }
//     printf("%d",Det(A));
// }




// void ShowMatrix(int A[2][2],int row,int col){
//     int i,j;
//     for(i=0;i<row;i++){
//         for(j=0;j<col;j++)
//             printf("%4d",A[i][j]);
//         printf("\n"); 
//     }
// }
// int MultiplyMatrix(int A[2][2],int B[2][2],int row,int col){
//     int C[2][2],sum,i,j,k;
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             sum=0;
//             for(k=0;k<2;k++)
//                 sum=sum+A[i][k]*B[k][j];
//             C[i][j]=sum;
//         }
//     }
//     ShowMatrix(C,2,2);
//     // A = | 1 2 | B = | 5 6 | C = | 00 01 |
//     //     | 3 4 |     | 7 8 |     | 10 11 |
//     //     C-------A---B-------A---B------
//     //            A00 B00     A01 B10              11
//     //     00 = (( 1 * 5 ) + ( 2 * 7 ))
//     //            A00 B01     A01 B11              10
//     //     01 = (( 1 * 6 ) + ( 2 * 6 ))
//     //            A10 B00     A11 B10              01
//     //     10 = (( 3 * 5 ) + ( 4 * 7 ))
//     //            A10 B01     A11 B11              00 
//     //     11 = (( 3 * 6 ) + ( 4 * 8 ))

// }
// int main(){
//     int A[2][2],B[2][2],i,j;
//     printf("Please Matrix A size 2x2 : \n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("Enter element [%d][%d] : ",i ,j);
//             scanf("%d",&A[i][j]);
//         }
//     }
//     printf("Please Matrix B size 2x2 : \n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("Enter element [%d][%d] : ",i ,j);
//             scanf("%d",&B[i][j]);
//         }
//     }
//     // printf("Matrix A is \n");
//     // ShowMatrix(A,2,2);
//     // printf("Matrix B is \n");
//     // ShowMatrix(B,2,2);
//     printf("Matrix A*B is \n");
//     MultiplyMatrix(A,B,2,2);
// }