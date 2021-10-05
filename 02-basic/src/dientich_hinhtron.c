// Khai b�o c�c thu vi?n
#include <stdio.h>        

// Khai b�o c�c h?ng, bi?n to�n c?c (global)
const float PI=3.1416;  

// Khai b�o khu�n m?u (prototype) h�m
float DienTichHinhTron(float); 

// Chuong tr�nh (h�m) ch�nh
int main() 
{
    // Khai b�o bi?n c?c b?
    float banKinh, dienTich=0; 

    // C�c l?nh
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

// C�i d?t c�c h�m t? d?nh nghia
float DienTichHinhTron(float r)
{
    if(r > 0) return r*r*PI;
}
