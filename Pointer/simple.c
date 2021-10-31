#include<stdio.h>

int main() {
	int number[5] = {10, 20, 30, 40, 50};
	// int *myPointer = number; 
    int *myPointer = &number[0];

	printf("first -> %d\n", *myPointer);
	myPointer++; 
	printf("go next -> %d\n", *myPointer); 
	myPointer++; 
	printf("go next -> %d\n", *myPointer); 
	myPointer++;
    printf("go back -> %d\n", *myPointer);
    myPointer++;
    printf("go back -> %d\n", *myPointer);

}