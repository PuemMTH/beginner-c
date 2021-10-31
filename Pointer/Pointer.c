#include<stdio.h>
#include<string.h>

// int main(){
//    float grade = 3.5; 
//    float *ptr;
//    ptr = &grade;
//    *ptr = 4.0;
//    printf("Grade = %.2f \n", *ptr);
//    printf("Address of grade = %x \n", &grade);
// }

// int main() {
// 	int number[5] = {10, 20, 30, 40, 50};
// 	int *myPointer = number; // int *myPointer = &number[0];

// 	printf("first -> %d\n", *myPointer);
// 	myPointer++; 
// 	printf("go next -> %d\n", *myPointer); 
// 	myPointer += 3;
// 	printf("go next 3 -> %d\n", *myPointer); 
// 	myPointer--; printf("go back -> %d\n", *myPointer);
// }

// int main() {
// 	float data[4] = {1.2,4.0,2.4,3.8} , sum =0;
// 	int i ;
// 	float *ptr ;
// 	ptr = data;
// 	for(i=0;i<4;i++){
// 		sum = sum+ptr[i];
// 		sum = sum+*(ptr+i);
// 		sum = sum+*ptr; ptr++;
// 	}
// 	printf("AVG of Data = %.2f \n",sum/4);
// }



// void cal_area_volume(float *x1,float *x2,float r){
// 	float pi = 22.0/7.0;
// 	*x1 = 4.0*pi*r*r;
// 	*x2 = (4.0/3.0)*pi*r*r*r;
// }
// int main(){
// 	float r,area, vloume;
// 	printf("Enter R:");
// 	scanf("%f",&r);
// 	cal_area_volume(&area, &vloume,r);
// 	printf("Area = %.2f and Volume = %.2f",area,vloume) ;
// }


// void fnc(int *a , int size) {
// 	int i ;
// 	for(i=0;i<size;i++) {
// 		*a = *a * 5 ;
// 		a++ ;
// 	} 
// }
// int main() {
// 	int x[] = {10,20,30};
// 	fnc(&x[0],3);
// 	printf("X = %d , %d , %d",x[0],x[1],x[2]);
// }


void equer(int *x,int *y,int *z){
	for(int i;i<4;i++){
//		z[i] = x[i]+y[i];
		*(z+i) = *(x+i)+*(y+i);
	}
}
int main(){
	int a[] = {1,2,3,4};
	int b[] = {5,6,7,8};
	int c[4];
	equer(a,b,c);
	for(int i;i<4;i++){
		printf("C[%d] = %d \n",i,c[i]);
	}	
}


// int main(){
// 	char tmp[3][30];
// 	char *name[3];
	
// 	for(int i=0;i<3;i++){
// 		printf("Enter Name : ");
// 		gets(tmp[i]);
// 		name[i] = tmp[i];
// 	}
// 	for(int i=0;i<3;i++){
// 		printf("Name[%d] = %s \n",i,name[i]);
// 	}
// }
