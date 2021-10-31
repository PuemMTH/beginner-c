#include <stdio.h>
main(){

	int data[4][3] = {
			   {130 , 420 , 360},
			   {948 , 565 , 340},
			   {34 , 3430 , 342},
			   {34 , 3430 , 342}
			}; 
	
	int o,in;
	for(o = 0;o < 4 ;o++){
		for(in = 0;in < 3 ;in++){
			scanf("%d",&data[o][in]);
		}
	}

	int i,j;
	for(i = 0;i < 4 ;i++){
		for(j = 0;j < 3 ;j++){
			printf("\n data[%d][%d] = %d",i,j,data[i][j]);
		}
	}
	
}