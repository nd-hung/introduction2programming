/*
Minh họa cài đặt & sử dụng hàm. 

Viết hàm nhận vào số nguyên dương n và thực hiện:
a. Trả về số đảo của số đó.
b. Có phải là số đối xứng (Trả về True/False)
c. Có phải là số chính phương.
d. Có phải là số nguyên tố.
e. Tổng các chữ số lẻ.
f. Tổng các chữ số nguyên tố.
g. Tổng các chữ số chính phương.
*/

#include <stdio.h>
#include <math.h>

//////////////////////////////////////////////////////////////////////
// Khai báo khuôn mẫu các hàm
// Hàm trả về số đảo của 1 số
unsigned int SoDao(unsigned int n);
// Hàm kiểm tra n có phải số đối xứng
char LaSoDoiXung(unsigned int n);
// Hàm kiểm tra n có phải số chính phương
char LaSoChinhPhuong(unsigned int n);
// Hàm kiểm tra n có phải số nguyên tố hay không
char LaSNT(unsigned int n); 

//////////////////////////////////////////////////////////////////////
// Chương trình chính
int main()
{
    int n;
    printf("Nhap n > 0: ");
    scanf("%d", &n);

    printf("So dao cua %d la %d\n", n, SoDao(n));

    if(LaSoDoiXung(n))
        printf("%d la so doi xung\n", n);
    else
        printf("%d khong phai so doi xung\n", n);

    if(LaSoChinhPhuong(n))
        printf("%d la so chinh phuong\n", n);
    else
        printf("%d khong phai so chinh phuong\n", n);
}

//////////////////////////////////////////////////////////////////////
// Hàm trả về số đảo ngược của n
unsigned int SoDao(unsigned int n)
{
    unsigned int sodao=0;
    char chusocuoi;
    while(n > 0)
    {
        // Lấy ra chữ số cuối của n
        chusocuoi = n % 10;
        // Giảm n, loại bỏ chữ số đã xét
        n /= 10;
        sodao = sodao * 10 + chusocuoi;
    }
    return sodao;
}

/* Hàm kiểm tra số đối xứng
Nếu số đảo của n == n -> n là số đối xứng.
*/
char LaSoDoiXung(unsigned int n)
{
    /*
    if(SoDao(n) == n)
        return 1;
    else    
        return 0;
    */
   return(SoDao(n) == n);
}

// Hàm kiểm tra n có phải số chính phương
char LaSoChinhPhuong(unsigned int n)
{
    return (int)sqrt(n) * (int)sqrt(n) == n;
}
