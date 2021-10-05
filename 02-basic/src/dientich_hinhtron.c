// Khai báo các thu vi?n
#include <stdio.h>        

// Khai báo các h?ng, bi?n toàn c?c (global)
const float PI=3.1416;  

// Khai báo khuôn m?u (prototype) hàm
float DienTichHinhTron(float); 

// Chuong trình (hàm) chính
int main() 
{
    // Khai báo bi?n c?c b?
    float banKinh, dienTich=0; 

    // Các l?nh
    printf("Nhap ban kinh hinh tron = ");	// Lenh xuat
    scanf("%f", &banKinh);					// Lenh nhap
    
    if(banKinh > 0)
    {
        dienTich = DienTichHinhTron(banKinh); 
        printf("Dien tich hinh tron = %f\n", dienTich);
    }
    else
        printf("Ban kinh hinh tron phai > 0");
}

// Cài d?t các hàm t? d?nh nghia
float DienTichHinhTron(float r)
{
    if(r > 0) return r*r*PI;
}
