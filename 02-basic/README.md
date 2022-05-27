```
<script 
src="https://gist.github.com/nd-hung/e01309ebe540852dba75d8cb3f0e5b13.js"></script>
```

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
    Nên sử dụng một <a href="https://www.doc.ic.ac.uk/lab/cplus/cstyle.html">quy cách đặt tên (naming convention)</a> thống nhất. Điều này giúp cho mã nguồn dễ đọc, dễ hiểu hơn.
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

Kiểu dữ liệu cơ sở (fundamental types) là các loại dữ liệu được tạo sẵn (built-in) bởi ngôn ngữ lập trình.

Các kiểu dữ liệu cơ sở trong C:
- Kiểu số nguyên
- Kiểu số thực
- Kiểu boolean
- Kiểu ký tự

#### Các kiểu số nguyên có dấu (signed integer)

- Kiểu số nguyên có dấu biểu diễn số nguyên, bao gồm cả số âm và số không âm (chẳng hạn 3, -15,...).
- Dùng n bits để biểu diễn số nguyên có dấu trên máy tính -> miền giá trị biểu diễn được là 
-2<sup>n-1</sup> .. +2<sup>n-1</sup>-1

| Kiểu  | Kích thước <br>(bit) | Miền giá trị       |
| :---  | :---: | ---: |
| char  |   8   | –128 .. 127 |
| int   |   16  | –32,768 .. 32,767 |
| short |   16  | –32,768 .. 32,767 |
| long  |   32  | –2,147,483,648 .. 2,147,483,647 |

#### Kiểu số nguyên không âm (unsigned integer)
- Dùng n bits để biểu diễn số nguyên không âm trên máy tính -> miền giá trị biểu diễn được là: 0 .. 2<sup>n-1</sup>

| Kiểu           | Kích thước <br>(bit) | Miền giá trị       |
| :---  | :---: | ---: |
| unsigned char  | 8                     | 0 .. 255           |
| unsigned int   | 16                     | 0 .. 65,535        |
| unsigned short | 16                     | 0 .. 65,535        |
| unsigned long  | 32                     | 0 .. 4,294,967,295 |


#### Các kiểu số thực (floating-point)

| Kiểu           | Kích thước <br>(bit) | Miền giá trị       |
| :---   | :---: | ---: |
| float  | 32    | -3.4E-38 .. 3.4E+38 |
| double | 64    | -1.7E-308 .. 1.7*E+308 |

- Kiểu `float` có độ chính xác đến 7 chữ số phần thập phân (single-precision).
- Kiểu `double` có độ chính xác đến 19 chữ số phần thập phân (double-precision).

#### Kiểu boolean
- Ngôn ngữ C định nghĩa ngầm định giá trị kiểu boolean bằng một số nguyên:
    - `false` (sai): giá trị 0.
    - `true` (đúng): giá trị khác 0,thường là 1.

<div class="note">
<p>
<ul>
    Ngôn ngữ C++ bổ sung kiểu <code>bool</code> để định nghĩa tường minh kiểu boolean.
</ul>
</p>
</div>

#### Kiểu ký tự
- Tên kiểu: char
- Miền giá trị: 256 ký tự trong bảng mã ASCII
- Ký tự được lưu trong máy tính bằng mã ASCII của nó. Chẳng hạn, ký tự 'A' được lưu thành số 65, hay 'a' là 97.

#### Biến (variables)
- Một biến là một vùng nhớ được đặt tên, dùng để lưu trữ dữ liệu trong quá trình chương trình hoạt động. 
- Giá trị của biến có thể thay đổi.
- Trong ngôn ngữ C, một biến có kích thước và kiểu dữ liệu nhất định; từ đó xác định được miền giá trị mà biến có thể lưu trữ, cũng như các thao tác có thể thực hiện được với biến này.
- Trong C, phải khai báo biến trước khi sử dụng.

**Khai báo biến**:

```
<kiểu dữ liệu> <tên biến>;
<kiểu dữ liệu> <tên biến> = <giá trị>;
<kiểu dữ liệu> <tên biến 1>, <tên biến 2>;
```
**Ví dụ**:
```c
int a; // Khai báo biến a có kiểu int
float b, c=0; // Các biến b,c cùng có kiểu float, c được gán giá trị 0
```

#### Hằng (constants)
- Một hằng là một vùng nhớ được đặt tên, dùng để lưu trữ giá trị không đổi trong chương trình. 
- Trong C, phải khai báo hằng trước khi sử dụng.

**Khai báo hằng**:

```
const <kiểu dữ liệu> <tên hằng> = <giá trị>;

hoặc:

#define <tên hằng>  <giá trị>
```
**Ví dụ**:
```c
const float PI = 3.1416;
#define MAX 100
```

### 2.2.2 - Biểu thức và câu lệnh
#### Biểu thức 
- Biểu thức là sự kết hợp của các toán tử (operators) và các toán hạng (operands).
- Các toán tử tác động lên các toán hạng theo thứ tự ưu tiên xác định để tính giá trị của biểu thức.
- Toán tử: `+, -, *, /, %, ...`
- Toán hạng: hằng, biến, lời gọi hàm...

Các ví dụ về biểu thức:
```c
b*b - 4*a*c;  
(-b + sqrt(delta))/2/a;    
((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
```

#### Toán tử gán
- Là câu lệnh gán giá trị của biểu thức (bên phải) cho một biến (bên trái).

- Cú pháp:
```c
<biến> = <biểu thức>;
```
- Các ví dụ về toán tử gán:
```c
delta = b*b - 4*a*c;      
x1 = (-b + sqrt(delta))/2/a;   
is_leap_year = ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));   
a = b = c = d = e = 100; 
```

#### Các phép toán số học 
##### Phép toán 1 ngôi (chỉ có 1 toán hạng)
++ (tăng 1 đơn vị)

-- (giảm 1 đơn vị)

Nếu toán tử ++/-- đặt trước toán hạng thì thực hiện tăng/giảm trước. Ngược lại nếu ++/-- đặt sau toán hạng thì thực hiện tăng/giảm sau.

```c
x = 68; y = x++; // y = 68, x = 69
x = 68; y = ++x; // x = 69, y = 69
```

##### Phép toán 2 ngôi (có 2 toán hạng)

| Phép toán | Tên gọi | Mô tả | Ví dụ
| :---:   | :--- | :--- | :---: |
| +  | Cộng (addition) | Cộng 2 số | `x + y` |
| -  | Trừ  (subtraction) | Trừ 2 số | `x - y` |
| *  | Nhân (multiplication) | Nhân 2 số | `x * y` |
| /  | Chia (division) | Chia 2 số | `x / y` |
| %  | Chia lấy phần dư (modulus) |  | `x % y` |

