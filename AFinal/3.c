// #include <stdio.h>
// #include <math.h>

// struct vehicleInfo{
//     char brand[50];
//     char plate[10];
//     int year;
// };
// struct vehicleInfo FunctionInfo(){
//     struct vehicleInfo car;
//     printf("Brand : ");
//     gets(car.brand);

//     printf("Plate : ");
//     gets(car.plate);

//     printf("year: ");
//     scanf("%d",&car.year);getchar();

//     return car;
// }
// int main(){
//     struct vehicleInfo VehicleCar[4]; 
//     int i;
//     for(i = 0 ; i < 4 ; i++){
//         printf("Enter car #%d's infomation\n",i+1);
//         VehicleCar[i] = FunctionInfo();
//     }

//     int tmp;
//     printf("\nEnter year to search: ");
//     scanf("%d",&tmp);
//     for(i = 0 ; i < 4 ; i++){
//         if(tmp <= VehicleCar[i].year){
//             printf("%s -> %s (%d)\n",VehicleCar[i].plate,VehicleCar[i].brand,VehicleCar[i].year);
//         }
//     }
//     printf("\n");

// }

#include <stdio.h>
#include <math.h>
 
struct vehicleInfo{ // สร้าง structure เพื่อรอการเรียกใช้
    char brand[50]; // ตัวแปล brand ชนิดข้อมูลเป็น char เก็บ 50 ตัวอีกษร
    char plate[10]; // ตัวแปล plate ชนิดข้อมูลเป็น char เก็บ 10 ตัวอีกษร
    int year; // ตัวแปล year ชนิดข้อมูลเป็น int
}; 
struct vehicleInfo FunctionInfo(){ //เป็นการสร้าง function structure เพื่อไว้ scan ค่า
    struct vehicleInfo car; //เป็นการเรียกใช้ structure vehicleInfo และตั่งชื่อ structure เป็น car
    printf("Brand : ");
    gets(car.brand); // เก็บค่า car.brand

    printf("Plate : ");
    gets(car.plate); // เก็บค่า car.plate

    printf("year: ");
    scanf("%d",&car.year);  // เก็บค่า car.year
    getchar();

    return car; // ส่งค่าคืน
}
int main(){
    struct vehicleInfo VehicleCar[4]; //เป็นการเรียกใช้ structure vehicleInfo และตั่งชื่อเป็น VehicleCar มีข้อมูล 4 ชุด 
    int i;
    for(i = 0 ; i < 4 ; i++){ // เป็นการ loop เพื่อเก็บข้อมูลในแต่ละ ชุดข้อมูล
        printf("Enter car #%d's infomation\n",i+1);
        VehicleCar[i] = FunctionInfo();
    }

    int tmp;
    printf("\nEnter year to search: ");
    scanf("%d",&tmp);
    for(i = 0 ; i < 4 ; i++){ // เป็นการวนหาในแต่ละชุดข้อมูล
        if(tmp <= VehicleCar[i].year){ //เช็คว่าในปีนั้น ข้อมูลที่รับมาก น้อยกว่าหรือไม่
            printf("%s -> %s (%d)\n",VehicleCar[i].plate,VehicleCar[i].brand,VehicleCar[i].year);
        }
    }
    printf("\n");
}