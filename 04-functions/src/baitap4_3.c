/*
Viết các hàm nhận vào số nguyên dương n và trả về gía trị các biểu thức sau:
a) S = 1 + 1/2 + … + 1/n
b) S = 1! + 2! + … + n!
*/

#include <stdio.h>
#include <math.h>

// Khai báo khuôn mẫu hàm trả về tổng nghịch đảo các số nguyên từ 1..n
// Cách 1 - Dùng vòng lặp
float TongNghichDao(unsigned int n);
// Cách 2 - Đệ quy
float TongNghichDao_DQ(unsigned int n);

////////////////////////////////////////////////////////////////////////////////////
// Main program
int main()
{
    int n=3;
    printf("Tong nghich dao tu 1..%d la %f\n", n, TongNghichDao_DQ(n));
    printf("Tong nghich dao tu 1..%d (khong de quy) la %f\n", n, TongNghichDao(n));
}

////////////////////////////////////////////////////////////////////////////////////
float TongNghichDao_DQ(unsigned int n)
{
    if(n == 0) return 0;
    return 1.0/n + TongNghichDao_DQ(n-1);
}

float TongNghichDao(unsigned int n)
{
    float s=0;
    int i;
    for(i=1; i <= n; i++)
        s += 1.0/i;
    return s;
}
