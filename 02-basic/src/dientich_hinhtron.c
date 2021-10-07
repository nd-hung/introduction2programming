/*
Cấu trúc cơ bản của một chương trình C
Minh họa qua ví dụ tính diện tích hình tròn.
*/

// Khai báo các thư viện
#include <stdio.h>        

// Khai báo các hằng, biến toàn cục (global)
const float PI=3.1416;  

// Khai báo khuôn mẫu hàm (prototype)
float DienTichHinhTron(float); 

/*---------------------------------------------------------------------------*/

// Chương trình chính
int main() 
{
    // Khai báo biến cục bộ (local)
    float banKinh, dienTich=0; 

    // Các lệnh
    printf("Nhap ban kinh hinh tron = ");   // Lệnh xuất
    scanf("%f", &banKinh);					// Lệnh nhập
    
    if(banKinh > 0)                         // Cấu trúc điều khiển
    {
        dienTich = DienTichHinhTron(banKinh); // Lời gọi hàm
        printf("Dien tich hinh tron = %f\n", dienTich);
    }
    else
        printf("Ban kinh hinh tron phai > 0");
    
    return 0;   // Kết thúc chương trình
}

/*---------------------------------------------------------------------------*/

// Cài đặt hàm tự định nghĩa
float DienTichHinhTron(float r)
{
    if(r > 0) return r*r*PI;
}
