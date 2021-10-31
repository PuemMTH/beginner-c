#include<stdio.h>
#include<string.h>

// int main(){
// 	char tmp[3][30];
// 	char *name[3];
	
// 	for(int i=0;i<3;i++){
// 		printf("Enter Name : ");
// 		gets(tmp[i]);
// 		name[i] = tmp[i];
// 	}
// 	for(int i=0;i<3;i++){
// 		printf("A[%d] = %s \n",i,name[i]);
// 	}
// }


// The Test 1
void Revese(int *p, int size)
{
	int *p_catch = p; // สร้าง pointer ชื่อว่า p_catch เพิ่อมาเก็บ pointer p
	int *catch_last = p+size-1; // สร้าง pointer ชื่อว่า catch_last และแทนค่าด้วย p+size-1

	while(p_catch<catch_last) // loop เพื่อเช็คว่า p_catch น้อยกว่า catch_last หรือไม่
	{
		int temp = *p_catch; // สร้าง temp เพื่อเก็บ *p_catch
		*p_catch = *catch_last; // แทนค่า p_catch ด้วย *catch_last
		*catch_last = temp; // แทนค่า *catch_last ด้วย temp
		p_catch++; // บวกค่า p_catch ใน state นั้นๆไปเรื่อยๆ
		catch_last--; // ลบค่า catch_last ใน state นั้นๆไปเรื่อยๆ
	}
}
// End The Test 1

void main (){
    int size;
    printf("Enter Suze of array : ");
    scanf("%d",&size);
    int A[size];
    int i;
    for(i=0; i<size; i++){
        printf("A[%d] = \n",i+1);
        scanf("%d",&A[i]);
    }
    // The Test 2
    Revese(&A[0],size);
    // End The Test 2
    printf("Revese A = ");
    for(i=0; i<size; i++)
        printf("%d",A[i]);
}