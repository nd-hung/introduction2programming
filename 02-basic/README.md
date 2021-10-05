<h2 align="center"> 
Các thao tác cơ bản với C
</h2>

### Mục tiêu:
- Xác định được cấu trúc của một chương trình C 
- Sử dụng được các thành phần: biến, hằng, biểu thức
- Sử được các lệnh cơ bản: gán, nhập/xuất

## [1 - Tổng quan về ngôn ngữ C](#intro)
## [2 - Các thao các cơ bản](#basic)

<br>

## 1 - Tổng quan về ngôn ngữ C <a name="intro"/>

### Giới thiệu
- C do Dennis Ritchie phát triển tại [phòng thí nghiệm Bell](http://www.bell-labs.com/) năm 1972.
- Hỗ trợ lập trình thủ tục/cấu trúc.
- Case sensitive.

### Bộ từ vựng của C

#### Các ký tự được sử dụng
- Bộ ký tự chữ cái Latinh `A, B, C, ..., Z, a, b,
c, ..., z`
- Bộ chữ số thập phân: `0, 1, 2, ..., 9`
- Các ký hiệu toán học: `+ – * / = < > ( )`
- Các ký tự đặc biệt: `. , : ; [ ] % ! \ # $ ‘`
- Ký tự gạch nối `_`, khoảng trắng `‘ ’`

#### Các từ khóa (keywords)
- Từ khóa là các từ dùng riêng của ngôn ngữ. Không được đặt các tên biến, hằng, hàm trùng với từ khóa.

- Bộ từ khóa của C

```c
    const; signed; struct; typedef; unsigned; static
    char; double; float; int; long; short; void
    if; else; switch; case; default
    for; while; do
    break; continue; return
    goto; enum; union; sizeof; auto; extern; register; volatile
```

#### Cấu trúc cơ bản của chương trình C

```c
// Khai báo các thư viện
#include <stdio.h>        

// Khai báo các hằng, biến toàn cục (global)
const float PI=3.1416;  

// Khai báo khuôn mẫu hàm (prototype)
float DienTichHinhTron(float); 

// Chương trình chính
int main() 
{
    // Khai báo biến cục bộ (local)
    float banKinh, dienTich=0; 

    // Các lệnh
    printf("Nhap ban kinh hinh tron = ");   // Lệnh xuất
    scanf("%f", &banKinh);  // Lệnh nhập 
    if(banKinh > 0)                         
    {
        dienTich = DienTichHinhTron(banKinh); // Lời gọi hàm
        printf("Dien tich hinh tron = %f\n", dienTich);
    }
    else
        printf("Ban kinh hinh tron phai > 0");
    
    return 0;   // Kết thúc chương trình
}

// Cài đặt hàm tự định nghĩa
float DienTichHinhTron(float r)
{
    if(r > 0) return r*r*PI;
}
```