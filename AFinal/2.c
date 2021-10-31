#include <stdio.h>
int size ;
void ShowMatrix(int A[size][size])
{
    int i,j ;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            printf("%4d",A[i][j]);
        printf("\n");
        
    }
}
int main()
{
    printf("Enter Size of Matric : ");
    scanf ("%d",&size);
    int A[size][size],B[size][size];


    // for เพื่อรับค่าของ Matric A
    int i,j;
    for(i=0;i<size;i++){ // เป็นการวนในแต่ละ Column
        for(j=0;j<size;j++){ // เป็นการวนในแต่ละ Row 
            printf("Enter element [%d][%d] : ",i ,j);
            scanf("%d",&A[i][j]); // รับค่าจาก user 
        }
    }

    // นำ Matric A มาคิดให้เป็น Matric B
    int k,l;
    for(k=0;k<size;k++){
        for(l=0;l<size;l++){
            // [0][0] [0][1] [0][2]
            if (k == 0){
                 B[k][l] = A[k][l]; 
            } // เป็นการเช็คค่าถ้า เป็นรอบที่ 1 ให้ นำ Matric B[k][l] มาแทนค่าด้วย A ในรอบที่ 1
            // [1][0] [1][1] [1][2]
            if (k == 1){
                 B[k][l] = A[k-1][l]+A[k][l]; 
            } // เป็นการเช็คค่าถ้า เป็นรอบที่ 2 ให้ นำ Matric B[k][l] มาแทนค่าด้วย A ในรอบที่ 1 กับรอบที่ 2
            // [2][0] [2][1] [2][2]
            if (k == 2){
                 B[k][l] = A[k-2][l]+A[k-1][l]+A[k][l]; 
            }
            // เป็นการเช็คค่าถ้า เป็นรอบที่ 3 ให้ นำ Matric B[k][l] มาแทนค่าด้วย A ในรอบที่ 1 กับรอบที่ 2 และรอบที่ 3 
        }
    }


    printf("MatrixA \n");
    ShowMatrix(A);
    printf("MatrixB \n");
    ShowMatrix(B);

} 