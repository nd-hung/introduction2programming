<h2 align="center"> 
Cơ bản về ngôn ngữ C
</h2>

### Mục tiêu:
- Xác định được cấu trúc của một chương trình C 
- Sử dụng được các thành phần: biến, hằng, biểu thức
- Sử được các lệnh cơ bản: gán, nhập/xuất

## [Giới thiệu ngôn ngữ C](#intro)
#### Đặc điểm
#### Bộ từ vựng
#### Cấu trúc chương trình C

## [Cơ bản về C](#basic)
#### Các kiểu dữ liệu
#### Biểu thức, câu lệnh

<br>

## Giới thiệu ngôn ngữ C <a name="intro"/>
- Ngôn ngữ lập trình C do Dennis Ritchie phát triển tại [phòng thí nghiệm Bell](http://www.bell-labs.com/) năm 1972.
- C thuộc nhóm ngôn ngữ lập trình thủ tục/cấu trúc.
- Đặc điểm của C:
    * Rất mạnh và linh động, kết hợp được tính năng của cả ngôn ngữ lập trình cấp cao (high-level) và cấp thấp (low-level).
    * Được sử dụng rộng rãi bởi các nhà lập trình chuyên nghiệp.
    * Rõ ràng, cô đọng.

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
    const;  struct; typedef;  static
    signed; unsigned; char; double; float; int; long; short; void
    if; else; switch; case; default
    for; while; do
    break; continue; return
    goto; enum; union; sizeof; auto; extern; register; volatile
```

#### Tên/Định danh (Identifier)
- Khi viết chương trình, cần sử dụng các thành phần như: các biến, hằng, hàm, cấu trúc. Việc khai báo và sử dụng chúng thông qua tên/định danh (identifier).
- Trong C, một tên có thể được tạo thành từ các ký tự chữ cái và chữ số nhưng bắt buộc bắt đầu bằng chữ cái hoặc dấu gạch dưới `_`, độ dài không vượt quá 255 ký tự.
- Không được đặt tên có khoảng trắng, không được trùng với các từ khóa.
- C phân biệt chữ hoa chữ thường.

<div class="success">
  <p><strong>Nên:</strong>
    <ul>
        <li> Đặt tên có ý nghĩa.</li>
        <li> Sử dụng một <a href="https://en.wikipedia.org/wiki/Naming_convention_(programming)">quy cách đặt tên (naming convention)</a> thống nhất. Điều này giúp cho mã nguồn dễ đọc, dễ hiểu hơn.</li>
    </ul>
  </p>
</div>


#### Dấu chấm phẩy `;`
- Dùng để phân tách giữa các câu lệnh. 

#### Dòng chú thích (comments)
- Các dòng chú thích giúp chương trình nguồn dễ hiểu hơn.
- Trình biên dịch bỏ qua các dòng chú thích.
- Hai dạng chú thích trong C:
    * Dạng 1: Phù hợp với chú thích gồm nhiều dòng
    ```c
    /*
        Comment 1
        Comment 2
    */
    ```
    * Dạng 2: Dành cho chú thích trên một dòng
    ```c
    // Comment
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

## Cơ bản về C <a name="basic">