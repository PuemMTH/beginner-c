#include <stdio.h>

int Draw(int n){
    int a,b; // สร้างตัวแปลเพื่อเก็บค่าแยกระหว่างส่วนบนและล่าง
    a = n/2+0.5; // แทนค่า a ด้วย n ที่รับค่ามาหารด้วย 2 และบวก 0.5 เพื่อจะทำให้เป็นจำนวนเต็ม
    b = n-a; // แทนค่า b ด้วย n ลบด้วย a เพื่อเป็นจำนวนที่เหลือที่ต้องแสดงข้างล่าง
    int i, j, k, l, countstar = 0 ; // สร้างตัวแปลต่างๆเพื่อใช้ในการ count ดอกจัน และใช้ใน loop

    // ส่วนนี้เพื่อ print ส่วนบน จากน้อยไปมาก
    for(i = 1;i <= a;i++){
        for (k = 0;k <= i-2;k++){
            printf(" "); // แสดงเว้นวรรคก่อนแสดง star
        }
        for (j = 1;j <= i;j++){
            printf("*"); // แสดง star
            countstar++; // นับ star
        }
        printf("\n");
    } 
    // ส่วนนี้เพื่อ print ส่วนล่าง จากมากไปน้อย
	for(i = b, l = 1;i >= l;i--){
        for (k = 0;k <= i-2;k++){
            printf(" "); // แสดงเว้นวรรคก่อนแสดง star
        }
        for (j = 1;j <= i;j++){
            printf("*"); // แสดง star
            countstar++; // นับ star
        }
        printf("\n");
    }
    return countstar;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("Count of * is %d",Draw(n));
}