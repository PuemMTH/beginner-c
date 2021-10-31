#include<stdio.h> 
#include<math.h>
// struct Vector{
//     double x,y,z; 
// };
// struct Vector ReadVector(){ 
//     struct Vector v;
//     printf("X element: ");
//     scanf("%lf",&v.x);
//     printf("Y element: ");
//     scanf("%lf",&v.y);
//     printf("Z element: ");
//     scanf("%lf",&v.z);
//     return v; 
// }
// void PrintVector(struct Vector v){ 
//     printf("(%.2lf,%.2lf,%.2lf)",v.x,v.y,v.z);
// }
// int main(){
//     struct Vector a;
//     printf("Enter a vector\n");
//     a = ReadVector();
//     printf("You justed enter a vector ");
//     PrintVector(a);
//     printf("\n");
// }




// struct Vector{
//     double x,y,z; 
// };
// struct Vector ReadVector(){ 
//     struct Vector v;
//     printf("X element: ");
//     scanf("%lf",&v.x);
//     printf("Y element: ");
//     scanf("%lf",&v.y);
//     printf("Z element: ");
//     scanf("%lf",&v.z);
//     return v; 
// }
// void PrintVector(struct Vector v){ 
//     printf("(%.2lf,%.2lf,%.2lf)",v.x,v.y,v.z);
// }
// double VectorSize(struct Vector v){
//     return sqrt(pow(v.x,2) + pow(v.y,2) + pow(v.z,2)); 
//}
// int main(){
//     struct Vector v;
//     printf("Enter vector v\n");
//     v = ReadVector();
//     printf("The size of the vector ");
//     PrintVector(v); printf(" is %.2lf\n",VectorSize(v));
// }


// struct Vector{
//     double x,y,z; 
// };
// struct Vector ReadVector(){ 
//     struct Vector v;
//     printf("X element: ");
//     scanf("%lf",&v.x);
//     printf("Y element: ");
//     scanf("%lf",&v.y);
//     printf("Z element: ");
//     scanf("%lf",&v.z);
//     return v; 
// }
// double DotVector(struct Vector u, struct Vector v){
//     return u.x*v.x+u.y*v.y+u.z*v.z;
// }
// int main(){ 
//     struct Vector u,v; 
//     printf("Enter vector u\n");
//     u = ReadVector();
//     printf("Enter vector v\n");
//     v = ReadVector();
//     printf("u * v = %.2lf\n",DotVector(u,v));
// }



// struct Vector{
//     double x,y,z; 
// };
// struct Vector ReadVector(){ 
//     struct Vector v;
//     printf("X element: ");
//     scanf("%lf",&v.x);
//     printf("Y element: ");
//     scanf("%lf",&v.y);
//     printf("Z element: ");
//     scanf("%lf",&v.z);
//     return v; 
// }
// void PrintVector(struct Vector v){ 
//     printf("(%.2lf,%.2lf,%.2lf)",v);
// }

// struct Vector CrossVectors(struct Vector u, struct Vector v){ 
//     struct Vector product;
//     product.x = u.y*v.z-u.z*v.y;
//     product.y = u.z*v.x-u.x*v.z;
//     product.z = u.x*v.y-u.y*v.x;
//     return product;
// }
// int main(){
//     struct Vector u,v;
//     printf("Enter vector u\n");
//     u = ReadVector();
//     printf("Enter vector v\n");
//     v = ReadVector();
//     printf("u x v = ");
//     PrintVector(CrossVectors(u,v));
// }

struct nisit{
    int id;
    char name[30];
    float gpa;
};
struct nisit InputValue(){
    struct nisit student;
    printf("ID : ");
    scanf("%d",&student.id);getchar();
    printf("Name : ");
    gets(student.name);
    printf("GPA: ");
    scanf("%f",&student.gpa);getchar();
    return student;
}
int main(){
    struct nisit nisits[5]; 
    int i;
    for(i = 0 ; i < 5 ; i++){
        printf("Enter student #%d's infomation\n",i+1);
        nisits[i] = InputValue();
    }
    int tmp;
    while(1){
        printf("Enter an ID to search (-1 to quit): ");
        scanf("%d",&tmp);
        if(tmp == -1) break;
        for(i = 0 ; i < 5 ; i++){
            if(tmp == nisits[i].id){
                printf("Name = %s \nGrade = %f\n",nisits[i].name,nisits[i].gpa);
            }
        }
        printf("\n");
    }
    printf("Quit Program !");
}