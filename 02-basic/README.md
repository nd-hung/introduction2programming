<h2 align="center"> 
2 - Cơ bản về ngôn ngữ C
</h2>

### Mục tiêu:
- Xác định được cấu trúc của một chương trình C 
- Sử dụng được các thành phần: biến, hằng, biểu thức, câu lệnh
- Viết chương trình sử dụng các lệnh cơ bản

<div class="header">
<a href="#intro"><h3>2.1 - Giới thiệu ngôn ngữ lập trình C</h3></a>
<ul>
    <h4>2.1.1 - Đặc điểm</h4>
    <h4>2.1.2 - Bộ từ vựng</h4>
    <h4>2.1.3 - Cấu trúc chương trình C</h4>
</ul>

<a href="#basic"><h3>2.2 - Cơ bản về ngôn ngữ C</h3></a>
<ul>
    <h4>2.2.1 - Các kiểu dữ liệu cơ sở</h4>
    <h4>2.2.2 - Biểu thức, câu lệnh</h4>
</ul>
</div>

<br>

## 2.1 - <a name="intro"/>Giới thiệu ngôn ngữ lập trình C </a>
### 2.1.1 - Đặc điểm ngôn ngữ C
- Ngôn ngữ C do Dennis Ritchie phát triển tại [phòng thí nghiệm Bell](http://www.bell-labs.com/) năm 1972.
- C thuộc nhóm ngôn ngữ lập trình thủ tục/cấu trúc.
- Ưu điểm của C:
    * Mạnh và linh động, kết hợp được tính năng của cả ngôn ngữ lập trình cấp cao (high-level) và cấp thấp (low-level).
    * Rõ ràng, cô đọng.
    * Được sử dụng rộng rãi bởi các nhà lập trình chuyên nghiệp.

### 2.1.2 - Bộ từ vựng của C

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
    const;  struct; typedef;  static
    signed; unsigned; char; double; float; int; long; short; void
    if; else; switch; case; default
    for; while; do
    break; continue; return
    goto; enum; union; sizeof; auto; extern; register; volatile
```

#### Tên/Định danh (Identifier)
- Khi viết chương trình, cần sử dụng các thành phần như: các biến, hằng, hàm, cấu trúc. Việc khai báo và sử dụng chúng thông qua tên/định danh (identifier).
- Trong C, một tên có thể được tạo thành từ các ký tự chữ cái và chữ số nhưng bắt buộc bắt đầu bằng chữ cái hoặc dấu gạch dưới `_`.
- Không được đặt tên trùng với từ khóa hoặc có khoảng trắng.
- Ngôn ngữ C phân biệt chữ hoa chữ thường (case sensitive). Vì thế, 2 tên sau đây là khác nhau: `maxSpeed` và `MaxSpeed`.

<div class="goodpractice">
  <p>
    <ul>
        <li> 
            Nên đặt tên có nghĩa & ngắn gọn (không nên dài quá 31 ký tự). 
        </li> 
Chẳng hạn, công thức tính quãng đường đi khi biết vận tốc và thời gian, nên viết `distance = speed * time` thay vì `d = s * t`.
<li> 
    Nên sử dụng một <a href="https://en.wikipedia.org/wiki/Naming_convention_(programming)">quy cách đặt tên (naming convention)</a> thống nhất. Điều này giúp cho mã nguồn dễ đọc, dễ hiểu hơn.
</li>
</ul>
</p>
</div>


#### Dấu chấm phẩy `;`
- Dùng để phân tách giữa các câu lệnh. 

#### Dòng chú thích (comments)
- Các dòng chú thích giúp chương trình nguồn dễ hiểu hơn.
- Trình biên dịch bỏ qua các dòng chú thích.
- Hai dạng chú thích trong C:
    * Dạng 1: Chú thích gồm nhiều dòng
    ```c
    /*
        Comment 1
        Comment 2
    */
    ```
    * Dạng 2: Chú thích trên một dòng
    ```c
    // Comment
    ```

### 2.1.3 -  Cấu trúc cơ bản của chương trình C

```c
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

/*---------------------------------------------------------------------------*/

// Cài đặt hàm tự định nghĩa
float DienTichHinhTron(float r)
{
    if(r > 0) return r*r*PI;
}
```

## 2.2 - <a name="basic">Cơ bản về ngôn ngữ C </a>
### 2.2.1 - Các kiểu dữ liệu cơ sở

Kiểu dữ liệu cơ sở (fundamental types) là các loại dữ liệu dựng sẵn (built-in) bởi ngôn ngữ lập trình.

Các kiểu dữ liệu cơ sở trong C:
- Kiểu số nguyên
- Kiểu số thực
- Kiểu boolean: có giá trị đúng hoặc sai
- Kiểu ký tự: 256 ký tự trong bảng mã ASCII

#### Kiểu số nguyên không dấu (unsigned)
- Dùng n bits để biểu diễn số nguyên không dấu -> miền giá trị biểu diễn được là: 0 .. 2<sup>n-1</sup>

| Kiểu           | Kích thước <br>(bit) | Miền giá trị       |
| :---  | :---: | ---: |
| unsigned char  | 8                     | 0 .. 255           |
| unsigned int   | 16                     | 0 .. 65,535        |
| unsigned short | 16                     | 0 .. 65,535        |
| unsigned long  | 32                     | 0 .. 4,294,967,295 |



### 2.2.2 - 